#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int num, index=1, vul=0, count=0;
    scanf("%d\n", &num);
    char txt[num], ans[num];
    for (int i=0; i<num; i++){
        scanf(" %c", &txt[i]);
        txt[i] = tolower(txt[i]);
        ans[0] = txt[0];
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
        for (int j=0; j<num; j++){
            if (ans[i] == txt[j])
                count += 1;
        }
        if (count > 0)
            printf("%c: %d\n", ans[i], count);
        count = 0;
    }
    return 0;
}