#include<stdio.h>
int main (){
    int a,b;
    printf("Enter a number a & b :");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
       printf("%d is greater than %d",a,b);
    }
    else if (a<b)
    {
        printf("%d is greater than %d",b,a);
    }
    else {
        printf("%d is equal %d",a,b);
    }
    
    return 0;
}