#include <stdio.h>
int main()
{
	int ans=1, last=0;
	while (1){
		int num;
		scanf("%d", &num);
		if (num == 0)
			break;
		else
		{
			if (last == 0)
				last = num;
			else
			{
				int ans1 = last%num;
				ans += ans1;
				last = num;
			}
		}
	}
	printf("%d", ans);
	return 0;
}