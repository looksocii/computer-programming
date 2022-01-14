#include <stdio.h>

int main()
{
	double num1, num2, num3, num4;
	scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);
	printf("Summation is %.2lf\n", num1+num2+num3+num4);
	printf("Average is %.3lf\n", (num1+num2+num3+num4)/4);
	return 0;
}