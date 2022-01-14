#include <stdio.h>
#include <string.h>
int main()
{
	char txt1, txt2[50]={" "}, txt3, txt4[50]={" "}, ans_txt[50]={" "};
	int loop, nloop=0, num1=1, num2=0, ans[50]={0}, loop2=0, ans_num[50]={0};
	scanf("%d", &loop);
	for (int _=0; _<loop; _++){
		if (nloop == loop)
			break;
		scanf("%s", &txt1);
		txt2[nloop] = txt1;
		nloop += 1;
	}
	for (int i=0; i<strlen(txt2); i++){
		if (txt2[i] == txt3)
			num1 += 1;
		else{
			txt4[num2] = txt3;
			ans[num2] = num1;
			txt3 = txt2[i];
			num1 = 1;
			num2 += 1;
			loop2 += 1;
		}
	}
	txt4[num2] = txt3;
	ans[num2] = num1;
	loop2 += 1;
	num2 = 0;
	nloop = 0;
	for (int i=1; i<loop2; i++){
		//printf("%c : %d\n", txt4[i], ans[i]);
		for (int j=0; j<strlen(ans_txt); j++){
			if (ans_txt[j] == txt4[i])
				ans_num[num2] += ans[i];
			else{
				ans_txt[num2] = txt4[i];
				ans_num[num2] = ans[i];
				num2 += 1;
				nloop += 1;
			}
		}
	}
	ans_txt[num2] = txt4[i];
	ans_num[num2] = ans[i];
	for (int i=0; i<nloop; i++){
		printf("%c : %d\n", ans_txt[i], ans_num[i]);
	}
	return 0;
}