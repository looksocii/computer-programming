#include <stdio.h>
#include <string.h>
int main()
{
	char txt[100];
	scanf("%[^\n]s", &txt);
	for (int i=strlen(txt)-1; i>=0; i--){
		printf("%c", txt[i]);
	}
	return 0;
}