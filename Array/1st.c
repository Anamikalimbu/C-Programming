#include <stdio.h>
int main (){
    int i , num[5];
    for(i=0; i<5; i++){
        printf("Enter integer number: ");
        scanf("%d",&num[i]);
    }
    printf("Array numbers are: \n");
    for(i=0; i<5; i++){
        printf("%d \t",num[i]);
    }
    return 0;
}
