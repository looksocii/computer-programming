#include <stdio.h>
#include <string.h>
int main(){
    char txt[200];
    scanf("%[^\n]", txt);
    for (int i=0; i<strlen(txt); i++){
    	if (txt[i] != ' ')
    		printf("%c", txt[i]);
    }
    return 0;
}