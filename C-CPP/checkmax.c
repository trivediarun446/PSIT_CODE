#include <stdio.h>
main()
{
    
    int n, max;
    int arry[15];
    printf("enter the number of element\n");
    scanf("%d",&n);

    printf("enter the Array elements:\n");
    for (int i = 0; i<n; i++)
    {
        printf("arry[%d]:",i);
        scanf("%d", &arry[i]);
    }
    max=arry[0];
    for (int i = 1; i < n; i++)
    {
       if (arry[i]>max)
       
        max=arry[i];
       
    }
    printf("max number is %d",max);
}