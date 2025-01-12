// write a cpp programe to print the power of a number 
#include<iostream> 
using namespace std ; 
int power(int n , int num)
{
if(num==1 )
{
    return 1 ;
}
return n*power(n,num-1);
}
int main ()
{
    int n ; int num ; 
    cout <<"enter the value of num and n" <<endl ;
    cin>>num ;
    cin>> n ;
    cout <<power(n , num);

}