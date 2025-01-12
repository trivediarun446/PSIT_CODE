// write a program to print a febonacci series
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number till the febonacci series to be print ");
    scanf("%d", &n);
    int x = 0;
    int y = 1;
    int z = 0;

    while (z <= n)
    {
        printf("%d\t", z);
        x = y;
        y = z;
        z = x + y;
    }
    return 0;
}