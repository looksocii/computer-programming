#include <stdio.h>
int main()
{
	double num[6][3], ans[3][3];
	int id1=0, id2=0, jd1=3, jd2=0;
	for (int i=0; i<6; i++){
		scanf("%lf %lf %lf", &num[i][0], &num[i][1], &num[i][2]);
	}
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			ans[i][j] = (num[id1][id2]*num[jd1][jd2])+(num[id1][id2+1]*num[jd1+1][jd2])+(num[id1][id2+2]*num[jd1+2][jd2]);
			jd2 += 1;
		}
		id1 += 1;
		jd2 = 0;
	}
	printf("A x B\n");
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			printf("%.2lf ", ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}