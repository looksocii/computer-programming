#include <stdio.h>
int main(){
	int num;
	scanf("%d", &num);
	int val = num;
	for (int i=0; i<num; i++){
		for (int j=num-1; j>=0; j--){
			if (i >= j)
				printf("%d", val);
			else
				printf(" ");
			val -= 1;
		}
		val = 2;
		int val2 = num;
		for (int k=0; k<=i-1; k++){
			if (i >= k)
				printf("%d", val);
			else
				printf(" ");
			val += 1;
		}
		val = num;
		printf("\n");
	}
	return 0;
}