// write a programme in cpp to print a factorial using recursion 
#include<stdio.h>
#include<iostream>
using namespace std ;
int factorial(int a)
{
    if(a<=0)
    {
      return 1;
    }
    else 
    return a*factorial(a-1);
}
int main ()
{
    int n ; 
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<factorial(n);
    return 0 ;
}