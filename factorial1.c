#include <stdio.h>
int main (){
    int fact=1,i;
    for(i=1;i<=10;i++){
        fact=fact*i;
    }
    printf("%d\n", fact);
    return 0;
}