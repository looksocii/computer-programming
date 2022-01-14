#include <stdio.h>
#include <string.h>
int main()
{
	int point, scor_0, scor_1, combo_0=1, combo_1=1;
	char num[50], last[50]={" "};
	scanf("%d %s", &point, &num);
	scor_0 = point, scor_1 = point;
	for (int i=0; i<strlen(num); i++){
		int ans = num[i];
		if (ans%2 == 0)
			scor_1 -= 1;
		else
			scor_0 -= 1;
	}
	for (int i=0; i<strlen(num)+1; i++){
		if (combo_0 == 3){
			scor_1 -= 3;
			combo_0 = 1;
		}
		if (combo_1 == 3){
			scor_0 -= 3;
			combo_1 = 1;
		}
		if (last[0] == num[i]){
			int ans = num[i];
			if (ans%2 == 0)
				combo_0 += 1;
			else
				combo_1 += 1;
		}
		else
			last[0] = num[i];
	}
	if (scor_0 == scor_1)
		printf("- %d %d", scor_0, scor_1);
	else if (scor_0 > scor_1)
		printf("0 %d %d", scor_0, scor_1);
	else
		printf("1 %d %d", scor_0, scor_1);
	return 0;
}