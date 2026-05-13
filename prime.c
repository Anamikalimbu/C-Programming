#include <stdio.h>
int main (){
    int n,i,j,c=0,r;
    printf("Enter any number: ");
    scanf("%d"  ,&n);
    for(j=1;j<=n;j++){
        for(i=1;i<=j;i++){
            r=j%i;
            if (r==0)
            {
                c=c+1;
            }
            
    }
    if (c==2)
    {
        printf("%d \n",j);
    }
    c=0;
    }
    return 0;
}