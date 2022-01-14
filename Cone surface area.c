#include <stdio.h>
 
struct ConeSurface {
    double r;
    double L;
};
 
int main(){
    struct ConeSurface ans1, ans2;
    scanf("%lf %lf", &ans1.r, &ans1.L);
    scanf("%lf %lf", &ans2.r, &ans2.L);
    printf("%.2lf\n", ((3.141592654*ans1.r*ans1.L)+(3.141592654*ans1.r*ans1.r)));
    printf("%.2lf\n", ((3.141592654*ans2.r*ans2.L)+(3.141592654*ans2.r*ans2.r)));
    return 0;
}