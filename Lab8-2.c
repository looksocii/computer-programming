#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct student_info{
    char name[61], surname[61], sex[7], id[13];
    int age;
    double gpa;
};

int main(){
    int num_vul=1;
    char sort[10];
    struct student_info txt[20], p;
    for (int i=0; i<20; i++){
        scanf("%s %s %s %d %s %lf\n", txt[i].name, txt[i].surname,
         txt[i].sex, &txt[i].age, txt[i].id, &txt[i].gpa);
    }
    scanf("%s", sort);
    for (int i=0; i<strlen(sort); i++){
        sort[i] = tolower(sort[i]);
    }
    if (strcmp(sort, "name") == 0){
        for(int i = 0; i < 20; i++){
            for (int j=i+1; j<20; j++){
                if (strcmp(txt[j].name, txt[i].name) < 0){
                    p = txt[i];
                    txt[i] = txt[j];
                    txt[j] = p;
                }
            }
        }
    }
    else if (strcmp(sort, "surname") == 0){
        for(int i = 0; i < 20; i++){
            for (int j=i+1; j<20; j++){
                if (strcmp(txt[j].surname, txt[i].surname) < 0){
                    p = txt[i];
                    txt[i] = txt[j];
                    txt[j] = p;
                }
            }
        }
    }
    else if (strcmp(sort, "id") == 0){
        for(int i = 0; i < 20; i++){
            for (int j=i+1; j<20; j++){
                if (strcmp(txt[j].id, txt[i].id) < 0){
                    p = txt[i];
                    txt[i] = txt[j];
                    txt[j] = p;
                }
            }
        }
    }
    for (int i=0; i<20; i++){
        if (strcmp(txt[i].sex, "Male") == 0){
            printf("Mr %c %s (%d) ID: %s GPA %.2lf\n", txt[i].name[0],
             txt[i].surname, txt[i].age, txt[i].id, txt[i].gpa);
        }
        else if (strcmp(txt[i].sex, "Female") == 0){
            printf("Miss %c %s (%d) ID: %s GPA %.2lf\n", txt[i].name[0],
             txt[i].surname, txt[i].age, txt[i].id, txt[i].gpa);
        }
    }
    return 0;
}