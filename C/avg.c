/* WAP to input marks of students and find the average of its */
#include <stdio.h>
int main (){
	int a[3];
	float avg;
	printf("Enter a marks of 1st subject: ");
	scanf("%d", &a[0]);
	printf("Enter a marks of 2nd subject: ");
	scanf("%d", &a[1]);
	printf("Enter a marks of 3rd subject: ");
	scanf("%d", &a[2]);
	avg=(a[0] + a[1] + a[2])/3.0;
	printf("The average marks is %2f%%", avg);
	return 0;
}
