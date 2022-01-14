#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	int num_d = num/86400;
	int num_h = (num%86400)/3600;
	int num_m = ((num%86400)%3600)/60;
	int num_s = ((num%86400)%3600)%60;
	printf("%d s = %d d %d h %d m %d s", num, num_d, num_h, num_m, num_s);
	return 0;
}