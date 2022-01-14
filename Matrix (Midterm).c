#include <stdio.h>
int main(){
	long int num1, num2, min = 10000000, max = -10000000, sum = 0;
	scanf("%d x %d", &num1, &num2);
	long int num[num1][num2];
	for (int i=0; i<num1; i++){
		for (int j=0; j<num2; j++){
			scanf("%ld", &num[i][j]);
			sum += num[i][j];
			if (num[i][j] > max)
				max = num[i][j];
			if (num[i][j] < min)
				min = num[i][j];
		}
	}
	double all = num1*num2;
	double avg = sum/all;
	printf("Transpose\n");
	for (int i=0; i<num2; i++){
		for (int j=0; j<num1; j++){
			printf("%ld ", num[j][i]);
		}
		printf("\n");
	}
	printf("Sum : %ld\n", sum);
	printf("Max : %ld\n", max);
	printf("Min : %ld\n", min);
	printf("Avg : %.2lf\n", avg);
	return 0;
}