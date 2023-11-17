#include<stdio.h>
#include<math.h>
int main()
{
    double p=3.0, q=11.0, n=33.0, d=3.0, e=7.0;
    double P;
    printf("Please enter your message: ");
    scanf("%lf",&P);
    printf("Encrypted message: ");
    double c, x;
    x=pow(P,e);
    c=fmod(x,n);
    printf("%lf", c);
    double y;
    y=pow(c,d);
    double np=fmod(y,n);
    printf("\nDecrypted message is: %lf", np);
}
