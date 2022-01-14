#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char txt[1000];
	int ans=0;
	scanf("%[^\n]", txt);
	for (int i=0; i<strlen(txt); i++){
		txt[i] = tolower(txt[i]);
	}
	for (int i=0; i<strlen(txt); i++){
		if (txt[i] == 's')
			ans += 1;
	}
	printf("%d", ans);
	return 0;
}