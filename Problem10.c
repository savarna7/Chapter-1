#include <stdio.h>
int main()
{
float m,w,im,iw,tp,tl,lm,lw;
tp = 80000;
m = 0.52*80000;
w = tp - m;
tl = 0.48*tp;
lm = 0.35*tp;
lw = tl-lm;
im = m-lm;
iw = w-lw;

printf("The total number of illiterate men and women are %f and %f\n",im,iw);

    return 0 ;
}