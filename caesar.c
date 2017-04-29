#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Enter key in the command line.");
        return 1;
        exit(1);
    }
    
    int k= atoi(argv[1]);
    
    if(k < 0)
    {
        printf("Key must be a non-negative integer.");
        return 1;
        exit(1);
    }
    
    string s;
    
    s= GetString();
    
    int c,l;
    
    l= strlen(s);
    
    k=k%26;
    
    for(int i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            printf(" ");
            continue;
        }
        
        c=(s[i]+k);
        
        if(isupper(s[i]))
        {
            if(c>90)
            {
                c=c-90;
                c=c+64;
            }
            printf("%c",c);
            continue;
        }
        else if(islower(s[i]))
        {
            if(c>122)
            {
                c=c-122;
                c=c+96;
            }
            printf("%c",c);
            continue;
        }
        else
        {
            printf("%c",s[i]);
            continue;
        }
    }
    printf("\n");
    return 0;
}