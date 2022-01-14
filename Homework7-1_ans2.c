#include <stdio.h>
int main(){
	int n, index=0;
	scanf("%d", &n);
	char c[n], ans[n];
	for (int i=0; i<n; i++){
		scanf("%c", &c[i]);
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
	for (int i=0; i<n; i++){
		printf("%c\n", ans[i]);
	}
	return 0;
}