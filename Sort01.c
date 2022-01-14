#include <stdio.h>
#include <string.h>
int main(){
	char name[5][1000], p[1000];
	for (int i=0; i<5; i++){
		scanf("%s", name[i]);
	}
	for(int i=0; i<5; i++){
        for (int j=i+1; j<5; j++){
            if (strcmp(name[j], name[i]) < 0){
            	strcpy(p, name[i]);
            	strcpy(name[i], name[j]);
            	strcpy(name[j], p);
            }
        }
    }
    for (int i=0; i<5; i++){
    	printf("%s\n", name[i]);
    }
    return 0;
}