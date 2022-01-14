#include <stdio.h>
#include <math.h>
struct Point{
	double x;
	double y;
};
double fun(struct Point p1, struct Point p2){
	double ans = sqrt(((p1.x - p2.x)*(p1.x - p2.x))+((p1.y - p2.y)*(p1.y - p2.y)));
	return ans;
}
int main(){
	struct Point p1, p2;
	double ans_all;
	scanf("%lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y);
	ans_all = fun(p1, p2);
	printf("Distance between two points (x1,y1) and (x2,y2) : %.2lf", ans_all);
	return 0;
}