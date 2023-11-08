#include<stdio.h>

int main ()
{
int num,n,a;
int sum = 0;
printf("Enter a five digit number :");
scanf("%d",&num);

n = num%10;
a = num/10;     /*Because we have specified the variable 'a' as an integer 
                  therefore the value of 'a' will be after cutting off 
                  the decimal part.*/
sum = sum +n;


n = a%10;
a = a/10;
sum = sum +n;

n = a%10;
a = a/10;
sum = sum+n;

n = a%10;
a = a/10;
sum = sum +n;

n = a%10;
a = a/10;
sum = sum +n;


printf("The sum of the digits of the number is %d\n",sum);

    return 0;
}