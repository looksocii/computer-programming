#include <stdio.h>
#include <string.h>
struct student_info{
	char name[1000], surname[1000], sex[100];
	int age, id;
	float gpa;
};

int main(){
	struct student_info txt[10];
	for (int i=0; i<10; i++){
		scanf("%s %s %s %d %d %f", txt[i].name, txt[i].surname, txt[i].sex, &txt[i].age, &txt[i].id, &txt[i].gpa);
	}
	for (int j=0; j<10; j++){
		if (strcmp(txt[j].sex, "Male") == 0)
			printf("Mr %c %s (%d) ID: %d GPA %.2f\n", txt[j].name[0], txt[j].surname, txt[j].age, txt[j].id, txt[j].gpa);
		else
			printf("Miss %c %s (%d) ID: %d GPA %.2f\n", txt[j].name[0], txt[j].surname, txt[j].age, txt[j].id, txt[j].gpa);
	}
	return 0;
}