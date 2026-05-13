#include <stdio.h>
int main (){
    int i,j,c=0,r;
    for(j=1;j<=100;j++){
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