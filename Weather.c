#include <stdio.h>
#include <string.h>

struct Weather {
    char outlook[9];
    int temperature;
    int humidity;
    char wind;
};

void playing_decision(struct Weather wt_param[], int n);
int main(){
	int n;
	scanf("%d", &n);
	struct Weather data[n];
	for (int i=0; i<n; i++){
		scanf("%s %d %d %c", data[i].outlook, &data[i].temperature, 
			&data[i].humidity, &data[i].wind);
	}
	playing_decision(data, n);
	return 0;
}

void playing_decision(struct Weather wt_param[], int num){
	for (int i=0; i<num; i++){
		if (strcmp(wt_param[i].outlook, "overcast") == 0)
			printf("yes\n");
		else if (strcmp(wt_param[i].outlook, "rain") == 0){
			if (wt_param[i].wind == 'F')
				printf("yes\n");
			else
				printf("no\n");
		}
		else if (strcmp(wt_param[i].outlook, "sunny") == 0){
			if (wt_param[i].humidity > 77.5)
				printf("no\n");
			else
				printf("yes\n");
		}
	}
}