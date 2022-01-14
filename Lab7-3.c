#include <stdio.h>
#include <math.h>

double perimeter(double x, double y);
double area(double u, double z);

int main(){
	double num1, num2, ans_P, ans_A;
	scanf("%lf %lf", &num1, &num2);
	ans_P = perimeter(num1, num2);
	ans_A = area(num1, num2);
	printf("Perimeter: %.2lf\n", ans_P);
	printf("Area: %.2lf\n", ans_A);
	return 0;
}

double perimeter(double x, double y){
	double z = sqrt((x*x)+(y*y));
	double ans1 = x+y+z;
	return ans1;
}

double area(double u, double z){
	double ans2 = (0.5)*(z*u);
	return ans2;
}