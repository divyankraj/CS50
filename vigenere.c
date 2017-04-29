#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int i,l;
    if (argc != 2)
    {
        printf("Error.");
        return 1;
        exit(0);
    }
    
    l=strlen(argv[1]);
    
    for(i=0;i<l;i++)
    {
        if(isalpha(argv[1][i]))
        {
            continue;
        }
        else
        {
            printf("Non-alphabet character detected.");
            return 1;
            exit(0);
        }
    }
    
    string s = GetString();
    int c,j,k = argv[1][0];
    int l2 = strlen(s);
    
    for(i=0,j=0;i<l2;i++)
    {
        if(j>=l)
        {
            j=j%l;
        }
        k=argv[1][j];
       // printf("\nInitail k: %i",k);
        if(isupper(argv[1][j]))
        {
            k=k-65;
        }
        else if(islower(argv[1][j]))
        {
            k=k-97;
        }
        
        //printf("\nChanged k : %i",k);
        
        if(!isalpha(s[i]))
        {
            printf("%c",s[i]);
            continue;
        }
        
        if(s[i]== ' ')
        {
            printf(" ");
            continue;
        }
       // printf("\nS[i]: %i",s[i]);
        c=s[i]+k;
        //printf("\nC: %i",c);
        //printf("\nUpper:%i; Lower: %i",isupper(s[i]),islower(s[i]));
        if(isupper(s[i]))
        {
            if(c>90)
            {
                c=c-90;
                c=c+64;
                printf("%c",c);
                j++;
                continue;
            }
            else
            {
                printf("%c",c);
                j++;
                continue;
            }
        }
        if(islower(s[i]))
        {
            if(c>122)
            {
                c=c-122;
                c=c+96;
                printf("%c",c);
                j++;
                continue;
            }
            else
            {
                printf("%c",c);
                j++;
                continue;
            }
        }
    }
    printf("\n");
    return 0;
}