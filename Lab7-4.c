#include <stdio.h>

double CtoF(double(n));
double FtoC(double(n));

int main(){
	double num;
	char txt;
	scanf("%lf %s", &num, &txt);
	if (txt == 99 || txt == 67){
		double ans = CtoF(num);
		printf("%.2lf f", ans);
	}
	else if (txt == 102 || txt == 70){
		double ans = FtoC(num);
		printf("%.2lf c", ans);
	}
	return 0;
}

double CtoF(double(n)){
	double f = 32+(n*(180.0/100.0));
	return f;
}

double FtoC(double(n)){
	double c = ((n-32)/(180.0/100.0));
	return c;
}