#include<stdio.h>
int main(){
    int i,a=0,b=1,c;
    for (i=1;i<=10;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
    return 0;
}