#include<stdio.h>
int main()
{
int bs,gs;
float da,hra;
printf("Hi Ramesh, Please enter your basic salary:");
scanf("%d",&bs);
da = 0.4*bs;
hra = 0.2*bs;
gs = da + hra + bs;
printf("Your Gross Salary is: %d\n",gs);
return 0 ;

}