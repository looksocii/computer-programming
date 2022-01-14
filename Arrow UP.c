#include <stdio.h>
int main()
{
	int num, num1=0;
	scanf("%d", &num);
	int num2=num;
	for (int i=1; i<num+3; i++){
		for (int i=1; i<(num*2); i++){
			if (i==num || i==num2+num1 || i==num2)
				printf("*");
			else
				printf(" ");
		}
		num1 += 2;
		num2 -= 1;
		printf("\n");
	}
	return 0;
}