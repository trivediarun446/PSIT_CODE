// write a cpp programe to print the number from 1 to n by passing two parameters 
#include<iostream>
using namespace std ;
void printnum( int n , int num )
{
    if(n==num)
    {
        cout<<"num"<<endl ;

    }
    cout<<n <<endl; 
    printnum(n+1 , num);
    
}
int  numb(int  k)
{
// write a programe to print the number using only one parameter 
if(k==1)
{
    cout<<"1"<<endl ; 

}
numb(k-1);
cout<<k<<endl  ;

}
int main ()
{
    int n , num ; 
    printnum(1 , 10);
    numb(11);
}
