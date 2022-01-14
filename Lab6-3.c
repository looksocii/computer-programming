#include <stdio.h>
int main()
{
	double num[3][3];
	for (int i=0; i<3; i++){
		scanf("%lf %lf %lf", &num[i][0], &num[i][1], &num[i][2]);
	}
	if (num[0][1]==0 && num[0][2]==0 && num[1][0]==0 && num[1][2]==0 && num[2][0]==0 && num[2][1]==0)
		printf("This is a scalar matrix");
	else
		printf("This is not a scalar matrix");
	return 0;
}