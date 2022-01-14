#include <stdio.h>
int main(){
	int num[5], vul[500], ans[5], vulx=0;
	for (int i=1; i<=500; i++){
		vul[i-1] = i;
	}
	for (int i=0; i<5; i++){
		scanf("%d", &num[i]);
	}
	for (int i=0; i<100; i++){
		for (int j=0; j<5; j++){
			if (num[j] == vul[i]){
				ans[vulx] = num[j];
				vulx += 1;
			}
		}
	}
	for (int i=0; i<5; i++){
		printf("%d ", ans[i]);
	}
	return 0;
}