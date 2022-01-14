#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	int num[26], a=65;
	for (int i=0; i<25; i++){
		num[i] = a;
		a += 1;
	}
	char string[20][60]={{" "}}, txt1[60]={" "}, txt2[60]={" "}, ans[20][60]={{" "}}, vul[60];
	int loop=0, loop_ans=0, max=0, num_vul=1;
	while (loop < 20){
		scanf("%s %s", &txt1, &txt2);
		for (int i=0; i<strlen(txt1); i++){
			txt1[i] = tolower(txt1[i]);
		}
		txt1[0] = toupper(txt1[0]);
		for (int i=0; i<strlen(txt2); i++){
			txt2[i] = tolower(txt2[i]);
		}
		txt2[0] = toupper(txt2[0]);
		for (int i=0; i<strlen(txt1); i++){
			string[loop][i] = txt1[i];
		}
		strcat(string[loop], " ");
		strcat(string[loop], txt2);
		loop += 1;
	}
	loop=0;
	while (loop < 25){
		for (int i=0; i<20; i++){
			if (num[loop] == string[i][0]){
				for (int j=0; j<strlen(string[i]); j++){
					ans[loop_ans][j] = string[i][j];
				}
				loop_ans += 1;
			}
		}
		loop += 1;
	}
	while (1){
		if (num_vul == 0)
			break;
		num_vul = 0;
		for (int i=0; i<20; i++){
			if (ans[i][0] == ans[i-1][0]){
				if (ans[i][1] < ans[i-1][1]){
					strcpy(vul, ans[i-1]);
					strcpy(ans[i-1], ans[i]);
					strcpy(ans[i], vul);
					num_vul += 1;
				}
			}
		}
	}
	num_vul = 1;
	while (1){
		if (num_vul == 0)
			break;
		num_vul = 0;
		for (int i=0; i<20; i++){
			if (ans[i][0] == ans[i-1][0] && ans[i][1] == ans[i-1][1]){
				if (ans[i][2] < ans[i-1][2]){
					strcpy(vul, ans[i-1]);
					strcpy(ans[i-1], ans[i]);
					strcpy(ans[i], vul);
					num_vul += 1;
				}
			}
		}
	}
	num_vul = 1;
	while (1){
		if (num_vul == 0)
			break;
		num_vul = 0;
		for (int i=0; i<20; i++){
			if (ans[i][0] == ans[i-1][0] && ans[i][1] == ans[i-1][1] && ans[i][2] == ans[i-1][2]){
				if (ans[i][3] < ans[i-1][3]){
					strcpy(vul, ans[i-1]);
					strcpy(ans[i-1], ans[i]);
					strcpy(ans[i], vul);
					num_vul += 1;
				}
			}
		}
	}
	for (int i=0; i<20; i++){
		printf("%s\n", ans[i]);
	}
	return 0;
}