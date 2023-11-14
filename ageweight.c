//WAP to count the number of students having age<25 & weignt < 50kg out of five

#include <stdio.h>
int main()
{
    int age, weight,i;
    int count = 0;

    for (i=0;i<5;i++) 
    {
        printf("Enter age of student %d: ",i+1);
        scanf("%d",&age);

        printf("Enter weight of student %d: ",i+1);
        scanf("%d",&weight);

        if (age<25 && weight<50) 
        {
            count++;
        }
    }

    printf("\nNumber of students with age<25 and weight<50:%d\n", count);

    return 0;
}