#include <stdio.h>
#include <string.h>
int main(){
	char txt1[1000], txt2[1000], txt[1000];
	int loc;
	scanf("%s %s %d", &txt1, &txt2, &loc);
	for (int i=0; i<=loc-3; i++){
		strcpy(txt, strcat(txt1, txt2));
		strcpy(txt1, txt2);
		strcpy(txt2, txt);
	}
	if (loc == 1)
		printf("%s\n", txt1);
	else
		printf("%s\n", txt2);
	return 0;
}