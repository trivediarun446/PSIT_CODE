// write a c proghrame to calculate the avg of numbers
#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0;
    printf("enter the number of student of class CS 1c \n");
    scanf("%d", &n);

    int marks[n];
    printf("enter the marks of student in computer science subject\n");
    for (int i = 0; i < n; i++)
    {
        printf("marks[%d]:", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }

   float avg = sum / n;
    printf("%.2f", avg);

    return 0;
}
