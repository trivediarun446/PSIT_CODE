// write a cpp programe to print the number the sum of square 
#include<iostream>
using namespace std ;
int sqsum(int n )
{
    if(n==1)
{
    return 1 ;
}
return n*n + sqsum(n-1);
} 
int main ()
{
    int n ; 
    cout<<"enter the number "<<endl ;
    cin>>n ; 
    cout<<sqsum(n);


}