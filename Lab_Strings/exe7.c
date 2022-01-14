#include <stdio.h>
#include <string.h>
int main(){
	char aeiou[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'}, txt[1000];
	int ans=0;
	scanf("%[^\n]", txt);
	for (int i=0; i<10; i++){
		for (int j=0; j<strlen(txt); j++){
			if (aeiou[i] == txt[j])
				ans += 1;
		}
	}
	printf("%d", ans);
	return 0;
}