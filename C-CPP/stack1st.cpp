// Write a programe to print all element of the stack 

#include<iostream>
#include<stack>
using namespace std ; 
int main()
{
    stack<int> stack1({2,4,5,5,5});
    stack1.push(6);
    int n ; 
    cout<<"enter the valur which you want to store in stack "<<endl ; 
    cin >> n ;
    stack1.push(n);
    while (!stack1.empty())
    {
       cout<< stack1.top();
       stack1.pop();
    }
    cout<<"value at the top index of stack :" <<stack1.top();

    // write a programe and take a user input of index and tell the value at that index 
    int i ;
    cout<<"enter the index at which you want to the value"<<endl ;
    cin>> i ;
    while(!stack1.empty())
    {
     stack1.pop();
     if(stack1.top()==i )
     {
      
     }
    }
}