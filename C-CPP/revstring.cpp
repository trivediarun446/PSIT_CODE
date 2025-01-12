// write a cpp program to print the reverse of string by using recurion method 
#include<iostream>
using namespace std ; 
int rev(string &str , int start , int end )
// In this question I used a approach in which we take a first and last element of string and swapped them 
{
    if (start >= end)
    {
        return ; 
    }
    char c = str [start];
    str[start]=str[end];
    str[end]=c;
    return rev(str , start+1, end-1);
}
int main()
{
    string str="rohit" ; 
    int end=4 , start=0 ;
    cout<<rev(str,start , end);
    return 0 ;
}