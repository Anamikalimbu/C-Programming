#include<stdio.h>
int main (){
    int n[3][3],i,j;
    printf("Enter number");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&n[i][j]);
        }
    }
    printf("You entered \n");
    for(i=0; i<3; i++){
        for (j=0; j<3; j++){
        printf("%d \t",n[i][j]);
    }
    }
    return 0;
}