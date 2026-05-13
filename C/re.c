#include<stdio.h>
int main()
{ int eng,nep,comp,acc,eco,total;
float per;
printf("/n enter marks of english");
scanf("%d",&eng);
printf("/n enter marks of nepali");
scanf("%d",&nep);
printf("/n enter marks of computer");
scanf("%d",&comp);
printf("/n enter marks of account");
scanf("%d",&acc);
printf("/n enter marks of economics");
scanf("%d",&eco);
total=eng+nep+comp+acc+eco;
per=(float)total/500 *100;
printf("/n Total obtained Marks=%d\n percentage=%.2f",total ,per);

if(per>=75){
	printf("/n Distinction");
}
else if(per>=60){
	printf("/n first Division");
}
else if(per>=50){
	printf("/n second Division");
}
else if (per>=40){
	printf("/n third Division");
}
else{

printf("/n Fail");
}
return 0;
	
}
