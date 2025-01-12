// write a cpp programe to check a number is binary or not and also done it ones compliment
#include <iostream>
#include <string.h>
using namespace std;
class binary
{
    private:
    string s;

public:
    void chk_bin();
    void get_data();
    void ones_compliment();
    void display();
};
void binary ::get_data()
{
    cout << "enter the number" << endl;
    cin >> s;
}
void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) !='1')
        {
            cout << "please enter valid binary number" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary :: display()
{
    cout<<"your compliment is this"<<endl;
    for (int i = 0; i < s.length() ; i++)
    {
        cout << s.at(i);
    }
    
}
int main()
{
    binary s;
    s.get_data();
    s.chk_bin();
    // cout<<"your compliment is this"<<endl ;
    s.ones_compliment();
    s.display();
    return 0;
}