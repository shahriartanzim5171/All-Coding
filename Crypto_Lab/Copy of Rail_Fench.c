#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i, j, k;
    char a[20], c[20], d[20];
    printf("Enter plain text: ");
    gets(a);
    int l=strlen(a);

    for(i=0, j=0; i<l; i++)
    {
        if(i%2==0)
            c[j++]=a[i];
    }
    for(i=0; i<l; i++)
    {
        if(i%2==1)
            c[j++]=a[i];
    }
    c[j]='\0';
    printf("Encrypted message is: ");
    printf("%s", c);
}
