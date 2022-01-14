#include <stdio.h>
#include <string.h>
int main()
{
	char txt1[100], txt2[100]="";
	int num=0, num1=0;
	scanf("%s", &txt1);
	for (int i=strlen(txt1)-1; i>=0; i--){
		txt2[num] = txt1[i];
		num += 1;
	}
	if (strcmp(txt1, txt2) == 0)
		printf("It is Palindrome.\n");
	else
		printf("It is not Palindrome.\n");
	return 0;
}