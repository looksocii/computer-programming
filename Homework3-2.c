#include <stdio.h>

int main()
{
	double num1, num2, num3;
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	printf("%.2lf", (num1*num3)-((num1*num3)*(num2/100)));
	return 0;
}