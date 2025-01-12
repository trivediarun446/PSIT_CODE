// write a cpp programe to print the nth term of a fibonacci series 
#include<iostream>
using namespace std ; 
int fibo(int n )
{
    if(n==0 || n==1)
    {
        return 0 ;
    }
    return fibo(n-1)+fibo(n-2);
     
}
int main ()
{
  int n ; 
  cout<<"enter the nth term of fibonacci series "<<endl ; 
  cin>> n ; 
  cout<<fibo(n);
}