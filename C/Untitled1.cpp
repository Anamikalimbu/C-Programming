#include <stdio.h>
#include <conio.h>
int main(){
	int Total,English,Computer,Nepali,Math,Physics,Chemistry;
	float Percentage;
	
	printf("Enter the marks of Subject: ");
	scanf("%d %d %d %d %d %d", &English, &Computer, &Math, &Physics, &Nepali, &Chemistry);
	
	Total= English+Computer+Math+Physics+Nepali+Chemistry;
	printf("\n %d is total marks\n",Total);
	
	Percentage=(float)Total/600 *100;
	printf("\n %.2f%% is a percentage \n",Percentage);
	
	if(Percentage>=90){
		printf("Grade A+");	
	}
	else if(Percentage>=80){
		printf("Grade A");
	}
	else if(Percentage>=70){
		printf("Grade B+");
	}
	else if(Percentage>=60){
		printf("Grade B");
	}
	else if(Percentage >= 50)
    {
        printf("Grade C+");
    }
    else if(Percentage >= 40)
    {
        printf("Grade C");
    }
    else
    {
        printf("Not Graded");
    }
    return 0;
	
}
