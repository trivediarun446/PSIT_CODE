// This programe is for constructor . It is a internsala practice 
// code 

// constructors are special functions that are executed during the object creation
// constructors are always define in public section 
// constructor has no return type 
// constructor are the similar name to its class name 
// parametrised constructor has number for attributes but attributes are may or may not similar to class attributes 
// there are three type of constructor 
// 1) defult constructor :- defult has no perameters . every class has defult parameters 
// 2) parametrised constructor :- parametrised constructor has parameters , we can define parametrised constructor outside of the class 
// but it must be  declare in class.
// 3) copy constructor 
#include<iostream>
#include<string>
using namespace std ;
class dog {
  public:
  int age ; 
  string name ; 
   string bread ; 
  //  Now we declare the parametrised constructor 
    dog(int age , string name , string bread);
  
    dog(); //  It is defult constructor 
   void display(); 
   void getdata();
};

// In this function we define the defult constructor parameters 
dog :: dog(){
  age = 0;
  name = "";
  bread = "";
}
// IN this function we define the parameter of parametrised function 
dog :: dog(int  age ,  string name ,  string bread)
{
  //  we assigned the parameter to the class member  
  // This keyword is a pointer type 
  // this -> it represent the dog type pointer 
  this->age = age;
  this->name = name;
  this->bread = bread;
}
// here we display the data 
void dog::display()
{
  cout<<"age : "<<age << " name : "<<name <<" bread : "<<bread<<endl ;

}
// here we take a user input 
void dog::getdata()
{
 cout<<"enter the dog name , dog age and dog breed"<<endl ;
    cin>>age ; 
    cin>>name ;
    cin>>bread;
}
int main ()
{
    int age=10;
    string bread="labrador";
    string name="bruno";
    dog dOG(age  , name , bread) ;
    dog dog2(19, "blacky", "labrador");
    dOG.display();
    dog2.display();
    dog dog3;
    // dog3.display();;
    dog3.getdata();
    dog3.display();
    return 0 ;
}