#include<stdio.h>
int main(){
	char txt1[30], txt2[30];
	int num1, num2, num3, num4;
	float num5;
	scanf("%s%s%d%d/%d/%d%f", &txt1, &txt2, &num1, &num2, &num3, &num4, &num5);
	printf("Fullname: %s %s\n", txt1, txt2);
	printf("ID: %d\n", num1);
	printf("DOB: %02d-%02d-%d\n", num2, num3, num4);
	printf("GPA: %.2f", num5);
	return 0;
}
