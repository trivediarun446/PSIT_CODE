// sum of an uswer input  array
#include <stdio.h>
int main()
{
    
    int n, sum = 0;
    int arry[n];
    printf("enter the number of element\n");
    scanf("%d",&n);

    printf("enter the Array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arry[%d]:",i);
        scanf("%d", &arry[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arry[i];
    }
    printf("%d", sum);
    return 0;
}