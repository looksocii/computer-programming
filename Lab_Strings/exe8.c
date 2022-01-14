#include <stdio.h>
#include <string.h>
int main(){
	char txt1[200], txt2[200];
	int max, vul=0;
	scanf("%[^\n]%*c", txt1);
	scanf("%[^\n]%*c", txt2);
	if (strlen(txt1) > strlen(txt2))
		max = strlen(txt1);
	else if (strlen(txt2) > strlen(txt1))
		max = strlen(txt2);
	else
		max = strlen(txt1);
	while(1){
		if (vul >= max)
			break;
		else{
			
			for (int i=vul; i<vul+2; i++){
				printf("%c", txt1[i]);
			}
			for (int i=vul; i<vul+2; i++){
				printf("%c", txt2[i]);
			}
			vul += 2;
		}
	}
	return 0;
}