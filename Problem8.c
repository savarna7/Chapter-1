#include<stdio.h>

int main()
{
long int num,a,b;
long int revnum = 0;

printf("Enter a five digit number :");
scanf("%ld",&num);

a = num%10;
b = num/10;
revnum = revnum + a*100000 ;

a = b%10;
b = b/10;
revnum = revnum + a*10000;

a = b%10;
b = b/10;
revnum = revnum + a*1000;

a = b%10;
b = b/10;
revnum = revnum + a*100;

a = b%10;
b = b/10;
revnum = revnum + a*10;




printf("Reverse of the number is :%ld\n",revnum);
    return 0;
}