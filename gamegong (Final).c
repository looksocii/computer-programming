#include <stdio.h>
#include <string.h>
int main(){
	int num, temp1=0, temp2=0, temp3=0, sc_lin=0, sc_grace=0, sc_pat=0, max=0, index=0;
	scanf("%d\n", &num);
	char txt1[100], txt[100], a[]="ABC", b[]="BABC", c[]="CCAABB";
	char lin[100], grace[100], pat[100];
	scanf("%[^\n]", txt1);
	for (int i=0; i<strlen(txt1); i++){
        if (txt1[i] != ' '){
            txt[index] = txt1[i];
        	index += 1;
        }
    }
	for (int i=0; i<num; i++){
		if (temp1 == 3)
			temp1 = 0;
		lin[i] = a[temp1];
		temp1 += 1;
		if (temp2 == 4)
			temp2 = 0;
		grace[i] = b[temp2];
		temp2 += 1;
		if (temp3 == 6)
			temp3 = 0;
		pat[i] = c[temp3];
		temp3 += 1;
	}
	for (int i=0; i<num; i++){
		if (lin[i] == txt[i]){
			sc_lin += 1;
			if (sc_lin > max)
				max = sc_lin;
		}
		if (grace[i] == txt[i]){
			sc_grace += 1;
			if (sc_grace > max)
				max = sc_grace;
		}
		if (pat[i] == txt[i]){
			sc_pat += 1;
			if (sc_pat > max)
				max = sc_pat;
		}
	}
	printf("%d\n", max);
	if (sc_lin == max)
		printf("Lin\n");
	if (sc_grace == max)
		printf("Grace\n");
	if (sc_pat == max)
		printf("Pat\n");
	return 0;
}