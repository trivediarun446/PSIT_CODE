// write a cpp programe to check the string is palamdrome or not by using recursive function 
#include<iostream>
using namespace std ; 
bool checkpalam(string str , int start  , int end  )
{
    if (start>=end)
    {
        return 1 ;
    }
    if (str[start]!=str[end])
    {
        return 0 ;
    }
    return checkpalam(str , start+1 , end -1 ) ; 
}
int main ()
{
string str="naman";
int start =0, end=4; 

cout<<checkpalam(str, start , end);
}