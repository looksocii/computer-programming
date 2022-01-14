#include <stdio.h>
#include <math.h>

int main()
{
	double num1, num2, num3;
	double pi = 3.14159265359;
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	double ans = pi*num3*((num2/2)*(num2/2));
	printf("Volume : %.2lfml\n", ans);
	printf("Baht/ml : %.4lf\n", num1/ans);
	return 0;
}