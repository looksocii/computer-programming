#include <stdio.h>
#include <string.h>
int main(){
	int max = 0, ans;
	char txt1[1000], txt2[1000], txt3[1000], txt4[1000], txt5[1000], txt6[1000];
	scanf("%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]", txt1, txt2, txt3, txt4, txt5, txt6);
	if (strlen(txt1) > max)
		max = strlen(txt1);
	if (strlen(txt2) > max)
		max = strlen(txt2);
	if (strlen(txt3) > max)
		max = strlen(txt3);
	if (strlen(txt4) > max)
		max = strlen(txt4);
	if (strlen(txt5) == max)
		printf("%s\n", txt5);
	if (strlen(txt6) > max)
		max = strlen(txt6);
	if (strlen(txt1) == max)
		printf("%s\n", txt1);
	else{
		ans = (max-strlen(txt1))/2;
		for (int i=0; i<ans; i++){ printf(" "); }
		printf("%s", txt1);
		for (int i=0; i<ans; i++){ printf(" "); }
		printf("\n");
	}
	if (strlen(txt2) == max)
		printf("%s\n", txt2);
	else{
		ans = (max-strlen(txt2))/2;
		for (int i=0; i<ans; i++){ printf(" "); }
		printf("%s", txt2);
		for (int i=0; i<ans; i++){ printf(" "); }
		printf("\n");
	}
	if (strlen(txt3) == max)
		printf("%s\n", txt3);
	else{
		ans = (max-strlen(txt3))/2;
		for (int i=0; i<ans; i++){ printf(" "); }
		printf("%s", txt3);
		for (int i=0; i<ans; i++){ printf(" "); }
		printf("\n");
	}
	if (strlen(txt4) == max)
		printf("%s\n", txt4);
	else{
		ans = (max-strlen(txt4))/2;
		for (int i=0; i<ans; i++){ printf(" "); }
		printf("%s", txt4);
		for (int i=0; i<ans; i++){ printf(" "); }
		printf("\n");
	}
	if (strlen(txt5) == max)
		printf("%s\n", txt5);
	else{
		ans = (max-strlen(txt5))/2;
		for (int i=0; i<ans; i++){ printf(" "); }
		printf("%s", txt5);
		for (int i=0; i<ans; i++){ printf(" "); }
		printf("\n");
	}
	if (strlen(txt6) == max)
		printf("%s\n", txt6);
	else{
		ans = (max-strlen(txt6))/2;
		for (int i=0; i<ans; i++){ printf(" "); }
		printf("%s", txt6);
		for (int i=0; i<ans; i++){ printf(" "); }
		printf("\n");
	}
	return 0;
}