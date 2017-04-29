#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main()
{
    string name=GetString();
    int i,l=strlen(name);
    char c=name[0];
    
    printf("%c",toupper(c));
  //  printf("%i",l);
  for(i=0;i<l;i++)
    {
        while(c!=' ' && i<l)
        {
            c=name[++i];
        }
        if(i<l)
        {
            c=name[++i];
            printf("%c",toupper(c));
        }
    }
    printf("\n"); 
    
}