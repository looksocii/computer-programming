#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
 
int chk(int x);
 
int main(){
    int num;
    scanf("%d", &num);
    printf("method = %d\n", chk(num));
    return 0;
}
int chk(int x){
    if (x == 0)
        return 1;
    int count = 0;
    if(x >= 1)
        count += chk(x-1);
    if(x >= 2)
        count += chk(x-2);
    if(x >= 5)
        count += chk(x-5);
    if(x >= 10)
        count += chk(x-10);
    return count;
}