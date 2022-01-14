#include <stdio.h>
#include <string.h>

struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};

int main(){
	int n, vul=0;
	char numid[10];
	scanf("%d", &n);
	struct Record data[n];
	for (int i=0; i<n; i++){
		scanf("%s %s %ld %ld", data[i].id, data[i].name,
		 &data[i].salary, &data[i].sales);
	}
	scanf("%s", numid);
	for (int j=0; j<n; j++){
		if (strcmp(data[j].id, numid) == 0){
			double ans1 = data[j].sales*(0.02);
			double ans2 = data[j].salary+ans1;
			printf("%s\n", data[j].id);
			printf("%s\n", data[j].name);
			printf("%ld\n", data[j].sales);
			printf("%.2lf\n", ans1);
			printf("%ld\n", data[j].salary);
			printf("%.2lf\n", ans2);
		}
		else
			vul += 1;
	}
	if (vul == n)
		printf("ID not found !!!\n");
	return 0;
}