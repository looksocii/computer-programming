#include <stdio.h>
#include <string.h>
int main(){
    char txt[100]={" "}, ans[10][100]={" "}, vul_txt[100]={" "};
    int vul=0, vul2=0;
    scanf("%[^\n]s", &txt);
    for (int i=0; i<strlen(txt); i++){
        if (txt[i] == ' '){
            strcpy(ans[vul], vul_txt);
            vul += 1;
            vul2 = 0;
        }
        else{
            vul_txt[vul2] = txt[i];
            vul2 += 1;
        }
    }
    strcpy(ans[vul], vul_txt);
    for (int i=0; i<=vul; i++){
        printf("%s\n", ans[i]);
    }
    return 0;
}