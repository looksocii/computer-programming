#include <stdio.h>
#include <string.h>
int main(){
	char txt[100];
	int z=0;
	scanf("%s", &txt);
	for (int i=0; i<strlen(txt); i++){
		if (txt[i] == '0')
			txt[i] = '1';
		else if (txt[i] == '1'){
			txt[i] = '0';
			z += 1;
		}
	}
	if (z == strlen(txt))
		printf("%d\n", 0);
	else
		printf("%s\n", txt);
	return 0;
}