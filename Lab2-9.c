#include <stdio.h>
int main()
{
	char txt1[30], txt2[30], txt3[30], txt4[30];
	scanf("%s %s %[^\n] %[^\n]", &txt1, &txt2, &txt3, &txt4);
	printf("Person 1: %s %s\n", txt1, txt2);
	printf("Person 2: %s\n", txt3);
	printf("Person 3: %s", txt4);
	return 0;
}
