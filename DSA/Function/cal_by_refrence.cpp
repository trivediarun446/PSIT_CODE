#include<iostream>
using namespace std ;
void swap(int &x , int &y)
{
    int temp = x ;
    x=y ; 
    y= temp ;
}
int main ()
{
    int a =10 ; 
    int b =20 ; 
    swap(a,b);
    cout<<a<<" "<< b <<endl ; 
    // In this actual parameters are remain same 
}