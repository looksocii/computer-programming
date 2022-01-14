#include <stdio.h>
#include <string.h>
int main()
{
    char text[1000], vul[10] = "aeiouAEIOU";
    int v=0;
    scanf("%[^\n]", text);
    for (int i=0; i<strlen(text); i++){
        for (int j=0; j<10; j++){
        	if (text[i] == vul[j]){
        		v += 1;
        		break;
        	}
        }
    }
    printf("%d\n", v);
    return 0;
}