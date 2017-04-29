#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main()
{
    int count = 0, difference;
    float change;
    
    printf("O hai! How much change is owed?\n");
    change=GetFloat();
    
    while(change<0.00)
    {
        printf("How much change is owed?\n");
        change=GetFloat();
    }

    change= change*100;
    change= round(change);
    difference=change;
    
    while(difference>0)
    {
        if(difference>=25)
        {
            difference=difference-25;
            count++;
        }
        else
        {
            if(difference>=10)
            {
                difference=difference-10;
                count++;
            }
            else
            {
                if(difference>=5)
                {
                    difference=difference-5;
                    count++;
                }
                else
                {
                    if(difference>=1)
                    {
                        difference=difference-1;
                        count++;
                    }
                }
                
            }
        }
    } 
    printf("%d\n",count);
}