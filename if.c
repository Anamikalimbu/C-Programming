#include<stdio.h>
int main (){
    int a;
    printf("Enter a number a:");
    scanf("%d",&a);
    if (a>0){
        printf("%d is positive number",a);
    }
    else if (a==0){
        printf("%d is zero", a);
    }
    else {
        printf("%d is negative number",a);
    }
    return 0;
}
