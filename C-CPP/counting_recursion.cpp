// write a c++ programe to print the counting using the recursion 
#include<iostream>
using namespace std ;

// Tail recursion process 
int count(int n )
{
    // base case 
    if (n==0)
    {
        return 1;
    }
    else {
       cout << n << endl;
       count(n-1);

    }
}
// Head recursion process 
int forwardcount(int n)
{
    if (n==0)
    {
        return 1;

    }
    else 
    {
        forwardcount(n-1);
        cout<<n<<endl;
    }
}
int main ()
{
    int n ;
    cout<<"enter the value of n"<<endl;
    cin>> n ;
    count(n);
    cout<<"It is Head recursion "<<endl;
    forwardcount(n);
    return 0 ;
}