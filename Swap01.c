#include <stdio.h>
#include <string.h>
void swap(float *a, float *b){
	float temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	float num1, num2, num3;
	scanf("%f %f %f", &num1, &num2, &num3);
	swap(&num1, &num2);
	swap(&num1, &num3);
	printf("%.2f, %.2f, %.2f", num1, num2, num3);
	return 0;
}