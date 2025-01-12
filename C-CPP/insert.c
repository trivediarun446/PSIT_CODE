// write a c program to insert a value in an array
#include <stdio.h>

int main()
{
    int arr[100];
    int n, k, value;
    printf("enter the number of element in an array:");
    scanf("%d", &n);

    printf("enter the number of element in tha array");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);
    }

    printf("enter the location where you wish to insert an element\n");
    scanf("%d", &k);

    for (int i = n - 1; i >= k - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    printf("enter the value which you want to insert :");
    scanf("%d",&value);
    arr[k] = value;
    printf("resultant arry is\n");

    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}