#include <stdio.h>
int main (){
    int n, c[1000],s=0,x=0,i;
    float avg;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0 ; i<n ; i++){
        scanf("%d",&c[i]);
        s=s+c[i];
        if(c[i] < 40){
            x=x+1;
        }
    }
    avg= s/n;
    printf("Average is %2f%% \n", avg);
    printf("\n Total number of fail student is %d \n ",x);
     return 0;
}