#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char txt1[100], txt2[100] = "", txt3[100] = "";
	int num = 0, max = 0;
	scanf("%[^\n]s", &txt1);
	for (int i=0; i<strlen(txt1); i++){
		if (isalpha(txt1[i]) == 0 && isdigit(txt1[i]) == 0){
			num = 0;
			if (strlen(txt2) > max){
				max = strlen(txt2);
				for (int i=0; i<strlen(txt2); i++){
					txt3[i] = txt2[i];
				}
			}
		}
		else{
			txt2[num] = txt1[i];
			num += 1;
		}
	}
	if (strlen(txt2) > max){
		max = strlen(txt2);
		for (int i=0; i<strlen(txt2); i++){
			txt3[i] = txt2[i];
		}
	}
	printf("%s\n", txt3);
	return 0;
}