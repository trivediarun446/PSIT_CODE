// write a program to check number is pallamdrome or not
#include <stdio.h>
int main()
{
    int n, rev, x;
    printf("enter the number to check numbe is pallamdrome or not :");
    scanf("%d", &n);
    x = n;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if (rev == x)

        printf("number is pallamdrome");

     else
        printf("not pallamdrome");

    return 0;
}