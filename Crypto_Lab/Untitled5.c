#include<stdio.h>
#include<math.h>
int main()
{
    double p=3, q=11, e=7, d=3, n=33;
    double msg =2;
    double phi=(p-1)*(q-1);
    printf("Message data = %lf", msg);
    double c =pow(msg, e);
    c=fmod(c,n);
    printf("\nEncrypted data=%lf", c);
    double m=pow(c,d);
    m=fmod(m,n);
    printf("\nOriginal message sent=%lf", m);
}
