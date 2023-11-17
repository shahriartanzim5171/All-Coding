#include<stdio.h>
#include<string.h>
int main()
{
    char a1[26]={'A', 'B', 'C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char a2[26]={'a', 'b', 'c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    printf("Please enter a text: ");
    char t[100];
    scanf("%s", t);
    int k;
    printf("Please enter key: ");
    scanf("%d", &k);
    int i, j;
    int l=strlen(t);
    char m[l];
    int x=26;
    printf("Encrypted message is: ");
    for(i=0; i<l; i++)
    {
        for(j=0; j<26; j++)
        {
            if(t[i]==a1[j])
            {
               m[i]=a1[(j+k)%26];
            }
            else if(t[i]==a2[j])
            {
                m[i]=a2[(j+k)%26];
            }
        }
    }
    for(i=0; i<l; i++)
    {
        printf("%c", m[i]);
    }

    //Decryption

    char d[l];
     for(i=0; i<l; i++)
    {
        for(j=0; j<26; j++)
        {
            if(m[i]==a1[j])
            {
               d[i]=a1[(j-k)%26];
            }
            else if(t[i]==a2[j])
            {
                d[i]=a2[(j-k)%26];
            }
        }

    }
    printf("\nAfter decryption: ");
    for(i=0; i<l; i++)
    {
        printf("%c", d[i]);
    }
}
