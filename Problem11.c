#include<stdio.h>
int main ()
{
int am,hun,ten,fif;

printf("Enter your amount in humdreds :");
scanf("%d",&am);

hun = am/100;
fif = am/50;
ten = am/10;

printf("Denominations of Rs.100 :%d\n",hun);
printf("Denominations of Rs.50 :%d\n",fif);
printf("Denominations of Rs.10 :%d\n",ten);

    return 0;
}