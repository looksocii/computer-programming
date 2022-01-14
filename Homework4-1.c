#include <stdio.h>
int main()
{
	char txt;
	scanf("%s", &txt);
	if (txt >= 65 && txt <= 90)
		printf("%c", txt+32);
	else if (txt >= 97 && txt <= 122)
		printf("%c", txt-32);
	else
		printf("error");
	return 0;
}