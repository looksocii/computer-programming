#include <stdio.h>
int main()
{
	char txt;
	scanf("%s", &txt);
	switch (txt)
	{
		case 65:
			printf("Genius");
			break;
		case 97:
			printf("Genius");
			break;
		case 66:
			printf("Good");
			break;
		case 98:
			printf("Good");
			break;
		case 67:
			printf("Try Harder");
			break;
		case 99:
			printf("Try Harder");
			break;
		case 68:
			printf("Very Bad");
			break;
		case 100:
			printf("Very Bad");
			break;
		case 70:
			printf("Fail");
			break;
		case 102:
			printf("Fail");
			break;
		default:
			printf("Invalid Input");
			break;
	}
	return 0;
}