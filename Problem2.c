#include<stdio.h>
int main()
{
    float km,m,f,i,cm;
printf("Enter the distance betweeen two cities(in km.):");
scanf("%f",&km);
m = km * 1000;
f = km * 3280.84;
i = km * 39370.1;
cm = km * 100000;
printf("The distance between two cities(in m.) is: %f\n",m);
printf("The distance between two cities(in ft.) is: %f\n",f);
printf("The distance between two cities(in inc.) is: %f\n",i);
printf("The distance between two cities(in cm.) is: %f\n",cm);
return 0;
}