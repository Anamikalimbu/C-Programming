#include <stdio.h>
int main (){
    int i,j,a[2][2];
    printf("enter the number:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("element position [%d] [%d]:",i+1,j+1);
            scanf ("%d",&a[i][j]);
        }
    }
    printf("\t the 2x2 matrix is \t \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d \t" ,a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
