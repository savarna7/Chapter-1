#include<stdio.h>
int main()
{
float f,c;
printf("Enter the temperature of your city(in F.):");
scanf("%f",&f);
c = 5.0/9.0*(f - 32);
printf("The temerature of your city (in Celcious]):%f\n",c);

    return 0 ;
}