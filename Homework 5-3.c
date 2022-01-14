#include <stdio.h>
int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	if (num1>=num2)
	{
		for (int i=0; i<(num1-num2)+1; i++){
			printf("%d ", num1-i);
		}
	}
	else
	{
		while (1){
			if (num1 > num2)
				break;
			else
				printf("%d ", num1);
				num1 += 1;
		}
	}
	return 0;
}