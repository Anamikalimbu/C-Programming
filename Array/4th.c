// WAP to sort the 10 integers number in ascending order and display it //
#include <stdio.h>
int main (){
    int n[10],i,j,a;
    printf("Enter 10 number: ");
    for(i=0; i<10; i++){
        scanf("%d",&n[i]);
    }
    for(i=0 ; i<10; i++){
        for(j=i+1; j<10; j++){
            if (n[i]>n[j]){
                a=n[i];
                n[i]=n[j];
                n[j]=a;
            }
    }
}
for ( i = 0; i < 10; i++){
    printf("\n %d \n", n[i]);
}
return 0;
}