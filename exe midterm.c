#include <stdio.h>
#include <string.h>
int main(){
	char txt[1000], num[]="0123456789";
	int count=0;
	scanf("%[^\n]", txt);
	for (int i=0; i<10; i++){
		for (int j=0; j<strlen(txt); j++){
			if (num[i] == txt[j])
				count++;
		}
		printf("%d ", count);
		count = 0;
	}
	return 0;
}