#include<stdio.h>
int main()
{
	char txt01[30],txt02[30],txt03[30],txt04[30];
	scanf("%s",&txt01);
	scanf("%s",&txt02);
	scanf("%s",&txt03);
	scanf("%s",&txt04);
	printf("String 1: %.3s\n",txt01);
	printf("String 2: %.4s\n",txt02);
	printf("String 3: %.5s\n",txt03);
	printf("String 4: %.6s\n",txt04);
	return 0;
}
