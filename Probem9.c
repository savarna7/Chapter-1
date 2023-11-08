#include <stdio.h>
int main ()
{
int num,sum,n,a;

printf("Enter a four digit number :");
scanf("%d",&num);

n = num%10;
a = num/1000;
sum = a + n;

printf("The sum of first and last digits of the number is :%d\n",sum);

    return 0;
}