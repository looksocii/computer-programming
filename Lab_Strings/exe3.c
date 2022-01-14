#include <stdio.h>
#include <string.h>
int main(){
	int num;
	scanf("%d\n", &num);
	char txt1[num], txt2[num];
	scanf("%[^\n]\n%[^\n]", txt1, txt2);
	int ans1 = (num-strlen(txt1)-2)/2;
	int ans2 = (num-strlen(txt2)-2)/2;
	for (int i=0; i<num; i++){ printf("*");	}
	if (strlen(txt1)%2 == 0){
		printf("\n*");
		for (int i=0; i<ans1; i++){ printf(" "); }
		printf("%s", txt1);
		for (int i=0; i<ans1; i++){ printf(" "); }
		printf("*");
	}
	else{
		printf("\n*");
		for (int i=0; i<ans1; i++){ printf(" "); }
		printf("%s", txt1);
		for (int i=0; i<ans1; i++){ printf(" "); }
		printf(" *");
	}
	if (strlen(txt2)%2 == 0){
		printf("\n*");
		for (int i=0; i<ans2; i++){ printf(" "); }
		printf("%s", txt2);
		for (int i=0; i<ans2; i++){ printf(" "); }
		printf("*");
	}
	else{
		printf("\n*");
		for (int i=0; i<ans2; i++){ printf(" "); }
		printf("%s", txt2);
		for (int i=0; i<ans2; i++){ printf(" "); }
		printf(" *");
	}
	printf("\n");
	for (int i=0; i<num; i++){ printf("*");	}
	return 0;
}