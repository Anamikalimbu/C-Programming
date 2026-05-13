#include <stdio.h>
const int city=2;
const int week=7;
int main (){
    int temp[city] [week] , i,j;
    for (i=0; i<city; i++){
    for(j=0; j<week; j++){
        printf("city: %d, day: %d", i+1 , j+1 );
        scanf("%d",&temp[i] [j]);
    }
} 
printf("\n Display values :\n \n");
for(i=0; i<city;i++){
    for(j=0; j<week; j++){
        printf("city: %d, day: %d = %d \n", i+1 , j+1 , temp[i] [j]);
}   
}
return 0;
}