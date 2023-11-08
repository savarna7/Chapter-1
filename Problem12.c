#include<stdio.h>
int main ()
{
float tsp,tp,tcp;
float cpo;

printf("Enter the total selling price of 15 items :");
scanf("%f",&tsp);
printf("Enter the totel profit earned :");
scanf("%f",&tp);

tcp = tsp - tp;
cpo = tcp/15;

printf("The cost price of one item is :%f\n",cpo);


    return 0;
}