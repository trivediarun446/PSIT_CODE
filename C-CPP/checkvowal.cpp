// write a cpp programe to check the string has how many number of vowel by using recurion 
#include<iostream>
using namespace std ;
int checkvowel(string str , int index)
{
    if (index== -1)
    {
        return 0 ;
    }
    if (str[index]=='a' ,str[index]=='e' ,str[index]=='i', str[index]=='o',str[index]=='u')
    {
        return 1+ checkvowel(str , index-1);
    }
    else 
    return checkvowel(str , index-1);
    
    
}
int main ()
{
    string str="rohit" ; 
    int index ;
    cout<<checkvowel(str , 4);
}