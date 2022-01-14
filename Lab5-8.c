#include <stdio.h>
int main()
{
	int ans1=0, ans2=0, ans3=0, ans4=0, avg1=0;
	double avg2=0, avg3=0;
	for (int i=0; i<50; i++){
		double age, height, weight;
		scanf("%lf %lf %lf", &age, &height, &weight);
		if ((age >= 20) && (height >= 160))
			ans1 += 1;
		if ((age < 20) && ((height <= 180) || (weight >= 60)))
			ans2 += 1;
		if ((age >= 30) && (weight >= 40) && (weight <= 80))
			ans3 += 1;
		if ((age < 40) && ((weight < 85) || (height <= 200)))
			ans4 += 1;
		avg1 += age;
		avg2 += height;
		avg3 += weight;
	}
	printf("Age >= 20 and Height >= 160: %d\n", ans1);
	printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", ans2);
	printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", ans3);
	printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", ans4);
	printf("Average Age: %d\n", avg1/50);
	printf("Average Height: %.2lf\n", avg2/50);
	printf("Average Weight: %.2lf\n", avg3/50);
	return 0;
}