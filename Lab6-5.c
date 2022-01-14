#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	char txt[300], str;
	int id=0, num[300];
	scanf("%[^\n] %c", &txt, &str);
	for (int i=0; i<strlen(txt); i++){
		if (txt[i] == tolower(str) || txt[i] == toupper(str)){
			num[id] = i+1;
			id += 1;
		}
	}
	if (id > 0)
		printf("There is/are %d \"%c\" in the above sentences.\n", id, str);
	else if (id == 0)
		printf("Not found.\n");
	if (id > 0){
		printf("Position: ");
		for (int i = 0; i<id; i++){
			if (num[i] > 0)
				printf("%d", num[i]);
			if (i+1 < id)
				printf(", ");
		}
	}
	return 0;
}