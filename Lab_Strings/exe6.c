#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char txt[1000][1000], p[1000], temp1[1000], temp2[1000];
	int index=0, num=0;
	while (1){
		scanf("%[^\n]%*c", txt[index]);
		num += 1;
		if (txt[index][0] == '.')
			break;
		else{
			index += 1;
		}
	}
	for (int i=0; i<num-1; i++){
		for (int j=i+1; j<num-1; j++){
			for (int k=0; k<strlen(txt[j]); k++){
				temp1[k] = tolower(txt[j][k]);
			}
			for (int x=0; x<strlen(txt[i]); x++){
				temp2[x] = tolower(txt[i][x]);
			}
			if (strcmp(temp1, temp2) < 0){
				strcpy(p, txt[i]);
				strcpy(txt[i], txt[j]);
				strcpy(txt[j], p);
			}
			for (int h=0; h<strlen(temp1); h++){ temp1[h] = ' '; }
			for (int y=0; y<strlen(temp2); y++){ temp2[y] = ' '; }
		}
	}
	for (int i=0; i<num-1; i++){ printf("%s ", txt[i]);	}
	printf(".");
	return 0;
}