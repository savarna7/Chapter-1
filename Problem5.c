#include<stdio.h>
int  main()
{
    int l,b,r,ar,p;
    float a,c;
printf("Enter the length and breadth of the rectangele :");
scanf("%d%d",&l,&b);
printf("Enter the radius of the circle :");
scanf("%d",&r);
ar = l*b;
p = 2*(l+b);
printf("The area and perimeter of the rectangle are : %d and %d\n",ar,p);
a = 3.14*r*r;
c = 2*3.14*r;
printf("The area and circumferance of the circle are :%f and %f\n",a,c);

    return 0;
}