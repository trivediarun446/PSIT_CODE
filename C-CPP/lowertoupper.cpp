// Write a cpp programe to convert lower case element into upper case element 
#include<iostream> 
using namespace std ; 
int lowertoupper(string &str , int index)
{
    if (index== -1)
    {
        return ; 
    }
    str[index]='A'+str[index]-'a';
    return lowertoupper(str, index-1);
}
int main ()
{
    string str ="rohit"; 
    int index =4;
    cout<<lowertoupper(str,4);
    return 0;
}