// write a c programe to print the sum of even number and product of odd number in array
#include <stdio.h>
int main()
{
    int n, i ;
    int sum = 0, pro = 1;
    int arr[30];
    printf("enter the number of element in the array :");
    scanf("%d", &n);
    printf("enter the element of an array\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    for (int k = 0; k < n; k++)
    {
        if (arr[k] % 2 == 0)
            sum = sum + arr[k];
        else
        {
            pro = pro * arr[k];
        }
    }
    printf("sum is %d and product is %d", sum, pro);
}
