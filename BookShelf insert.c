#include <stdio.h>
#include <string.h>

struct data{
	char book[1000];
};

int main(){
	int n, m, vul=0, index=1, count=0;
	scanf("%d\n", &n);
	scanf("%d\n", &m);
	struct data txt[m], ans[n];
	if (n == 0 || m == 0)
		printf("Have no book\n");
	else{
		for (int i=0; i<m; i++){ scanf("%[^\n]%*c", txt[i].book); }
		strcpy(ans[0].book, txt[0].book);
		if (index < n){
			for (int i=1; i<m; i++){
				for (int j=0; j<n; j++){
					if (strcmp(txt[i].book, ans[j].book) == 0)
						vul += 1;
				}
				if (vul == 0){
					strcpy(ans[index].book, txt[i].book);
					index += 1;
				}
				vul = 0;
			}
		}
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				if (strcmp(ans[i].book, txt[j].book) == 0)
					count += 1;
			}
			if (count > 0)
				printf("%d %s\n", count, ans[i].book);
			count = 0;
		}
	}
	return 0;
}