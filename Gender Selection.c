#include <stdio.h>
#include <string.h>
struct book{
	char name[500], surname[500], sex[100];
	int age;
};
int main(){
	int num, temp=0;
	char ans_sex[100];
	scanf("%d", &num);
	struct book data[num];
	for (int i=0; i<num; i++){
		scanf("%s %s %d %s\n", data[i].name, data[i].surname, &data[i].age, data[i].sex);
	}
	scanf("%s", ans_sex);
	for (int i=0; i<num; i++){
		if (strcmp(data[i].sex, ans_sex) == 0){
			printf("%s %s %d %s\n", data[i].name, data[i].surname, data[i].age, data[i].sex);
			temp += 1;
		}
	}
	if (temp == 0)
		printf("error");
	return 0;
}