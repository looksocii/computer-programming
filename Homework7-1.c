#include <stdio.h>
int fac(int num);
int main(){
	int n, total=0;
	scanf("%d", &n);
	int a = n/1, b = n/2, c = n/5, d = n/10;
	for (int i=0; i<a+1; i++){
		for (int j=0; j<b+1; j++){
			for (int k=0; k<c+1; k++){
				for (int l=0; l<d+1; l++){
					if ((i*1)+(j*2)+(k*5)+(l*10) == n)
						total += fac(i+j+k+l)/(fac(i)*fac(j)*fac(k)*fac(l));
				}
			}
		}
	}
	printf("method = %d", total);
	return 0;
}

//Factorial function
int fac(int num){
	int ans = 1;
	for (int i=1; i<num+1; i++){
		ans *= i;
	}
	return ans;
}