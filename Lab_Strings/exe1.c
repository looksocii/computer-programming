#include <stdio.h>
#include <string.h>
int main(){
    char txt1[200], txt2[200];
    scanf("%[^\n]\n%[^\n]", txt1, txt2);
    if (strlen(txt1) > strlen(txt2))
        printf("%s\n", txt1);
    else if (strlen(txt1) < strlen(txt2))
        printf("%s\n", txt2);
    else
        printf("\"FUCK YOU\"");
    return 0;
}