#include <stdio.h>
#include <cs50.h>

int main()
{
    int height,count;
    
    printf("height:");
    height=GetInt();
    
    while(height<0||height>23)
    {
        printf("Height:");
        height=GetInt();
    }
    
    for(int i=2;i<=height+1;i++)
    {
        count=height-i+1;
        while(count>0)
        {
            printf(" ");
            count--;
        }
        count=i;
        while(count>0)
        {
            printf("#");
            count--;
        }
        printf("\n");
    }
    
    
}