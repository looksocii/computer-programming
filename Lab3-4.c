#include <stdio.h>
#include <math.h>

int main()
{
	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	printf("%.2lf", sqrt((num1*num1)+(num2*num2)));
	return 0;
}