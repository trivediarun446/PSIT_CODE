// write a cpp programe to print the count down of birthday 
#include<iostream>
using namespace std ;
void funct( int n)
{
    if(n==0)
    {
        cout<<"Happy birthday"<<endl ;

    }
    cout<<"n days left for birthday "<<endl ;
    funct(n-1);
}
int main ()
{
    int n ; 
    cout<<"enter the days from which count down will start "<<endl ;
    cin>>n ;
    funct(n);
}