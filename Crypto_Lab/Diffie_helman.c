#include<stdio.h>
#include<math.h>
int main()
{
    double p=23, g=9, a=4, b=3, x, y;
    x=pow(g,a);
    x=fmod(x,p);
    y=pow(g,b);
    y=fmod(y,p);
    double ka=pow(y,a);
    ka=fmod(ka,p);
    printf("%lf", ka);
    double kb=pow(x,b);
    kb=fmod(kb,p);
    printf("\n%lf", kb);
}
