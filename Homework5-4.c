#include <stdio.h>
int main()
{
	int num1, num2=1;
	scanf("%d", &num1);
	int num3 = num1-1;
	for (int i=0; i<num1; i++)
	{
		for (int i2=0; i2<num3; i2++){
			printf(" ");
		}
		for (int i3=0; i3<num2; i3++){
			if (i3%2 == 0)
				printf("-");
			else
				printf("*");
		}
		printf("\n");
		num3 -= 1;
		num2 += 2;
	}
	return 0;
}