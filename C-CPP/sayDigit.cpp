// Write a cpp programe to print digit of a number by using recursion
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int sayDigit(int n, string arr[])
{
    if (n == 0)
        return 1;

    int digit = n % 10;
    n = n / 10;

    sayDigit(n, arr);
    cout << arr[digit] << endl;
}
int main()
{
    int n;
    cout << "enter the number " << endl;
    cin >> n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayDigit(n, arr);
}