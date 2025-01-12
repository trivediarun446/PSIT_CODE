// write a cpp program to print a sum of n natural number by recursion 
#include<iostream>
using namespace std ; 
int sum(int num)
{
    if(num==1)
    {
        return 1 ;

    }
    return num+sum(num-1);
}
int main ()
{
    int n ;
    cout<< "enter the number "<<endl ; 
    cin>>n ; 
    cout<<sum(n);
}