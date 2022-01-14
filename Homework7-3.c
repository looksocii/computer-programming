#include <stdio.h>
#include <string.h>

int main(){
	char str, txt[30]={" "};
	int ball;
	scanf("%s %s", &str, &txt);
	if (str == 'L')
		ball = 1;
	else if (str == 'C')
		ball = 2;
	else if (str == 'R')
		ball = 3;
	for (int i=0; i<strlen(txt); i++){
		if (txt[i] == 'A'){
			if (ball == 1)
				ball = 2;
			else if (ball == 2)
				ball = 1;
			else if (ball == 3)
				ball = 3;
		}
		else if (txt[i] == 'B'){
			if (ball == 1)
				ball = 1;
			else if (ball == 2)
				ball = 3;
			else if (ball == 3)
				ball = 2;
		}
		else if (txt[i] == 'C'){
			if (ball == 1)
				ball = 3;
			else if (ball == 2)
				ball = 2;
			else if (ball == 3)
				ball = 1;
		}
	}
	if (ball == 1)
		printf("L");
	else if (ball == 2)
		printf("C");
	else if (ball == 3)
		printf("R");
	return 0;
}