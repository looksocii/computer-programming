#include <stdio.h>
#include <string.h>
int main(){
	int lin=0, cha=0, word=0;
	while (1){
		char txt[200];
		scanf("%[^\n]%*c", txt);
		if (txt[0] == '.')
			break;
		else{
			for (int i=0; i<strlen(txt); i++){
				if (txt[i] >= 65 && txt[i] <= 90 || txt[i] >= 97 && txt[i] <= 122)
					cha += 1;
				if (txt[i] == ' ')
					word += 1;
			}
			word += 1;
		}
		lin += 1;
	}
	printf("Char = %d, word = %d, line = %d", cha, word, lin);
    return 0;
}