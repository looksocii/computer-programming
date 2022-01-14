#include <stdio.h>
int main()
{
	int num, num1=1, num3=1;
	scanf("%d", &num);
	int num2=(num-1)/2, num4=(num-1)/2;
	for (int i=0; i<(num-1)/2; i++){
		for (int i=1; i<((num-1)/2)+1; i++){
			if (num1==i)
				printf("-");
			else
				printf("#");
		}
		printf("#");
		for (int i=1; i<((num-1)/2)+1; i++){
			if (num2==i)
				printf("-");
			else
				printf("#");
		}
		printf("\n");
		num1 += 1;
		num2 -= 1;
	}
	for (int i=0; i<(num-1)/2; i++){
		printf("#");
	}
	printf("-");
	for (int i=0; i<(num-1)/2; i++){
		printf("#");
	}
	printf("\n");
	for (int i=0; i<(num-1)/2; i++){
		for (int i=1; i<((num-1)/2)+1; i++){
			if (num4==i)
				printf("-");
			else
				printf("#");
		}
		printf("#");
		for (int i=1; i<((num-1)/2)+1; i++){
			if (num3==i)
				printf("-");
			else
				printf("#");
		}
		printf("\n");
		num3 += 1;
		num4 -= 1;
	}
	return 0;
}