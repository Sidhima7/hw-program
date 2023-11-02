//WAP to calculate the factorical of a given number using while loop.
#include<stdio.h>
int main()
{
    int num,i=1,fact=1;
    printf("enter a number:");
    scanf("%d",&num);
    
    while(i<=num)
    {
        fact*=i;
        i++;
    
    }
    printf("factorical of the number is: %d",fact);
    return 0;
}