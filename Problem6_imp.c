#include<stdio.h>
int main()
{
int c,d,e;
printf("Enter the number at location C: ");
scanf("%d",&c);
printf("Enter the number at location D: ");
scanf("%d",&d);

e=c;                   //with using third variable
c=d;
d=e;

printf("New number at location C: %d\n",c);
printf("New number at the location D:%d\n",d);

    return 0;
}