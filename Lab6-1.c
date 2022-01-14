#include <stdio.h>
int main()
{
	int M[] = {2, 20, 8, 10, 4, 6, 16, 18}, loop=1, ans=0;
	int N[] = {1, 3, 9, 7, 11, 15, 19};
	while (loop){
		int num;
		scanf("%d", &num);
		if (num <= 20 && num >= 1)
		{
			for (int i=0; i<8; i++){
				if (M[i] == num)
				{
					printf("%d is in M at index [%d]\n", num, i);
					loop=0;
					ans+=1;
					break;
				}
				else if (N[i] == num)
				{
					printf("%d is in N at index [%d]\n", num, i);
					loop=0;
					ans+=1;
					break;
				}
			}
			if (ans == 0)
			{
				printf("%d is not in neither M nor N\n", num);
				loop=0;
			}
		}
	}
	return 0;
}