#include <stdio.h>
int main()
{
	float num1, num2, num3;
	scanf("%f %f %f", &num1, &num2, &num3);
	float total_1 = (num1*num3)-((num1*num3)*(num2/100));
	int ans = num3/3;
	float total_2 = (num3-ans)*num1;
	if (total_1 == total_2)
		printf("Discount %.f%%\n%.2f", num2, total_1);
	else if (total_2 < total_1)
		printf("Buy 2 Get 1\n%.2f", total_2);
	else if (total_1 < total_2)
		printf("Discount %.f%%\n%.2f", num2, total_1);
	return 0;
}