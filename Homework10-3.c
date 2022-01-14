#include <stdio.h>
#include <string.h>
int main(){
	char txt[200], ans[100];
	int index=1, vul=0, max=0, count=0;
	scanf("%[^\n]", txt);
	ans[0] = txt[0];
	for (int i=0; i<strlen(txt); i++){
		for (int j=0; j<strlen(ans); j++){
	            if (txt[i] == ans[j])
	                vul += 1;
	    }
	    if (vul == 0){
	        ans[index] = txt[i];
	        index += 1;
	    }
	    vul = 0;
	}
	for (int i=0; i<strlen(ans); i++){
        for (int j=0; j<strlen(txt); j++){
            if (ans[i] == txt[j])
                count += 1;
        }
        if (count > max)
        	max = count;
        count = 0;
    }
    for (int i=0; i<strlen(ans); i++){
        for (int j=0; j<strlen(txt); j++){
            if (ans[i] == txt[j])
                count += 1;
        }
        if (count == max)
        	printf("%c", ans[i]);
        count = 0;
    }
	return 0;
}