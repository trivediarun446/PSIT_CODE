// write a c programe to sort an array by selection method (increasing order)
#include <stdio.h>
int main()
{
    int n;
    int t;
    int max;
    int arry[30];
    printf("enter the number of element in the array :");
    scanf("%d", &n);
    printf("enter the element of an array\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]:", i);
        scanf("%d", &arry[i]);
    }
    max=arry[0];
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arry[i] > arry[j])
            {
                t = arry[i];
                arry[i] = arry[j];
                arry[j] = t;
            }
        }
    }
    printf("array after sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arry[i]);
    }
    return 0;
}