#include <stdio.h>
#include <string.h>
int main(){
	char txt[1000], ans[1000];
	int count, num=0;
	scanf("%[^\n]", txt);
	while(1){
		for (int i=0; i<strlen(txt); i++){
			if (txt[i] == txt[i+1])
				count = i;
		}
		for (int i=0; i<strlen(txt); i++){
			if (i == count || i == count+1)
				continue;
			else{
				ans[num] = txt[i];
				printf("%c", txt[i]);
				num += 1;
			}
		}
		printf("\n");
		strcpy(txt, ans);
		strcpy(ans, "  ");
		num = 0;
		if (count == 0)
			break;
	}
	return 0;
}