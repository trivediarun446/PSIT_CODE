// 
// write a c++ programe to create a class for the dog 
#include<iostream>
using namespace std;
class pet_dog
{
private:
    int age;
    string color;
    string bread ;
    string pet_name;
public:
    void getdata();
    void display_data();
};

void pet_dog :: getdata()
{
   cout<<"enter the age of dog"<<endl ;
   cin>>age ;
   cout<<"enter the color "<<endl ;
   cin>> color ;
   cout<<"enter the  breed of dog"<<endl ;
   cin>> bread ; 
   cout<<"enter the  name of dog"<<endl ;
   cin>> pet_name ; 
}
void pet_dog :: display_data()
{
    cout<<age<<endl ;
    cout<<color<<endl ;
    cout<<bread <<endl;
    cout<<pet_name<<endl;
}
int main()
{
    pet_dog mydog ;
    pet_dog otherdog ;
    mydog.getdata();
    mydog.display_data();
    otherdog.getdata();
    otherdog.display_data();
}


