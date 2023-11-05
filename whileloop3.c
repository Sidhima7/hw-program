#include<stdio.h>
int main()
{
    int sum=0,i;
    int sum_of_squares=0;
    for(i=1;i<=5;i++);
    {
       printf("%d\t%d\n",i,i*i);
       sum+=i;
       sum_of_squares+=i*i;
    }
    printf("sum of first five numbers: %d\n",sum);
    printf("sum of the squares of the first numbers: %d\n",sum_of_squares);
    return 0;    
}