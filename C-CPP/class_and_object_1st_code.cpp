//WAP in c++ using class and object to store price list of 15 items and print the largest price as well as the sum of all 
// prices
#include<iostream>
#include<string>
using namespace std;
class items
{
    string item_name ;
    int price[3] ;
    public:
    void getdata();
    int largest_price();
    int sum();
    void display_items();

};
void items::getdata()
{
  for (int i = 0; i < 3; i++)
  {
    cout<<"\n"<<"Item :"<<i+1;
    cout<<"\n"<<"enter the item name: ";
    cin>>item_name;
    cout<<"\n"<<"enter the iteam price: ";
    cin>>price[i];

  }
  
}
int items::largest_price()
{    
       int large;
       large = price[0];
      for(int i=1;i<3;i++)
      {
            if(large<price[i])
                large = price[i];
      }
      return large;
}
int items::sum ()
{     int sum = 0;
      for(int i = 0; i<3;i++)
      {
      sum+=price[i];
      }
      return sum;
}
void items::display_items(void)
{     cout<<"\nCode Price\n";
      for(int i = 0; i<3;i++)
      {     cout<<"\n"<<item_name;
            cout<<" "<<price[i];
      }
      cout<<"\n";
}
int main ()
{
    items order;
    order.getdata();
    int total,largest;     
    cout<<"\n.Display largest price";
    largest = order.largest_price();
    cout<<largest; 
    cout<<"\n";
    cout<<"\n Display sum of prices";
    total = order.sum();
    cout<<total;

    return 0;

}
