#include <stdio.h>
int main(){
	int num, vul=10000;
	scanf("%d", &num);
	for (int i=0; i<5; i++){
		printf("%-81d", num/vul);
		vul = vul/10;
	}
	return 0;
}