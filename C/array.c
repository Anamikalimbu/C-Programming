//  WAP to input 10 number and display it 
#include <stdio.h>
int main (){
	int n[10],i;
	printf("Enter 10 number: ");
	for(i=0;i<10;i++){
		scanf("%d", &n[i]);
	}
	printf("\n You entered : \n");
	for(i=0;i<10;i++){
		printf("%d \t \n", n[i]);
	}
	return 0;
}
