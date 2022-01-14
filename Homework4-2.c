#include <stdio.h>
int main()
{
	int a, b, c, num = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (b+c > a)
		num += 1;
	if (a+c > b)
		num += 1;
	if (a+b > c)
		num += 1;
	if (num == 3)
		printf("Triangle is valid.");
	else
		printf("Triangle is not valid.");
	return 0;
}