#include <stdio.h>
#include <string.h>
int main(){
    char txt1[200], txt2[200];
    int max=0;
    scanf("%s %s", txt1, txt2);
    if (strlen(txt1) > strlen(txt2))
        max = strlen(txt1);
    else
        max = strlen(txt2);
    for (int i=0; i<max; i++){
        if (i < strlen(txt1))
            printf("%c", txt1[i]);
        if (i < strlen(txt2))
            printf("%c", txt2[i]);
    }
    return 0;
}