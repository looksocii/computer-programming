#include <stdio.h>
#include <string.h>

int main(){
	int n, index=0, vul=0;
	scanf("%d\n", &n);
	char c[n][1], ans[n][1];
	for (int i=0; i<n; i++){
		scanf("%c\n", &c[i]);
		if (index == 0){
			strcpy(ans[index], c[i]);
			index += 1;
		}
		for (int j=0; j<n; j++){
			if (strcmp(c[i], ans[j]) == 0)
				vul += 1;
		}
		if (vul == 0){
			strcpy(ans[index], c[i]);
			index += 1;
		}
		vul = 0;
	}
	printf("\n");
	for (int i=0; i<index; i++){
		printf("%c\n", ans[i]);
	}
	return 0;
}