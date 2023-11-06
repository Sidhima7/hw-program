#include <stdio.h>
int main() 
{ 
    int num = 1;
    while (num <= 20)
    {
        if (num % 2 != 0) 
        {
            printf("%d ", num);
        }

        num++;
    }

    printf("\n");

    return 0;
}