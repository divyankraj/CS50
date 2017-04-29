#include <stdio.h>
#include <cs50.h>

int main()
{
    int min;
    
    printf("minutes: ");
    min= GetInt();
    printf("bottles: %d",min*12);
}