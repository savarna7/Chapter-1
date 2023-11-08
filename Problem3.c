#include<stdio.h>
int main()
{
int a,b,c,d,e,per;
float avg;
printf("Marks scored in Subject 1:");
scanf("%d",&a);

printf("Marks scored in Subject 2:");
scanf("%d",&b);

printf("Marks scored in Subject 3:");
scanf("%d",&c);

printf("Marks scored in Subject 4:");
scanf("%d",&d);

printf("Marks scored in Subject 5:");
scanf("%d",&e);

avg = (a+b+c+d+e);
printf("The aggregate marks obtained by the student is:%f\n",avg/500);

printf("The percentage marks obtained by the student is:%f\n",avg/5);
    return 0;
}