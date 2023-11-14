//WAP to find the cube of 1 to 10 numbers 
//by using do while loop

#include<stdio.h>
int main()
{
    int cube,a=1;
    do
    {
       cube=a*a*a;
       printf("cube of %d=%d\n",a,a*a*a);
       a++; 
    } 
    while(a<=10);
    return 0;
}