#include <stdio.h>
#include <string.h>
int main(){
	char key_up[] = {'A', 'I', 'W', 'G', 'Z', 'V', 'F', 'U', 'T', 'H', 'S',
	 'O', 'J', 'L', 'K', 'D', 'E', 'C', 'N', 'M', 'R', 'Q', 'P', 'Y', 'X', 'B', '\0'};
	 char key_low[] = {'a', 'i', 'w', 'g', 'z', 'v', 'f', 'u', 't', 'h', 's',
	 'o', 'j', 'l', 'k', 'd', 'e', 'c', 'n', 'm', 'r', 'q', 'p', 'y', 'x', 'b', '\0'};
	char txt[200];
	scanf("%[^\n]s", &txt);
	for (int i=0; i<strlen(txt); i++){
		for (int j=0; j<26; j++){
			if (txt[i] == key_up[j]){
				if (j-5 < 0){
					txt[i] = key_up[(j-5)+26];
					break;
				}
				else{
					txt[i] = key_up[j-5];
					break;
				}
			}
			else if (txt[i] == key_low[j]){
				if (j-5 < 0){
					txt[i] = key_low[(j-5)+26];
					break;
				}
				else{
					txt[i] = key_low[j-5];
					break;
				}
			}
		}
	}
	for (int i=0; i<strlen(txt); i++){
		printf("%c", txt[i]);
	}
	return 0;
}