#include<iostream>
#include<map>
#include<unordered_map>
using namespace std ; 

int main ()
{
    // creation 

    // Here I create a unordered map using key as a string and value as a int 
    unordered_map <string , int > map ; 
    
    // Insertion 

    // 1st method 
    // In this method we make a key valur pair and then insert it using the insert function 
    pair<string, int> p = make_pair("Arun",3);
    map.insert(p);


    // 2nd Method 
    // Is method mein hm ek pair banaye ge aur usko direct instert kara denge 

    pair<string , int > pair2("name", 2); 
    map.insert(pair2);

    // 3rd method 
    // method mein hm direct value denge jaise hm array mein karte hai 

    map["mera"]=4 ;
    map["mera"]=5 ;
    // Yeh jo uper likha hai is se yeh hoga ki paise "mera "ko 4 value  assign hogi fir uske bad "mera" ko 5 value assign ho jye gi 
    // her ek key ke paise apni unique value ho gi 


    // Searching  
    cout<<map["mera"]<<endl ; 

    // we can also use at() function . 
    cout<<map.at("arun")<<endl ;

    // Agar aat() function ki help se hm koi aise entry dalenge jo bani hi nhi hai to vo hm ko error denge . 
    // wahi agar hm normal array ki trh koi value denge to vo apne aap se key ke liye koi ek nayi value vana denga 

    // cout<<map.at("unkown key ")<<endl ; this line will give error 

    cout<<map["unkownkey"]<<endl ; 
    // Ab Line number 48 sahi hai kyu ki line number 46 mein mein "unknown" ke liye ek value khud se hi ban gyi hai 
    cout<<map.at("unkownkey")<<endl ; 


    // for calculating the size of map 

    cout<<map.size()<<endl ; 

    // If want to check the key is present or not then we use the function count() . If key is present then the count will return 1 and otherwise it will return 0 ;; 
    cout<<map.count("Arun")<<endl  ; /* return 1 */ 
    cout<<map.count("ram")<<endl ; /* return 0 */

    // Erase function  
    map.erase("mera"); 
    cout<<map.size()<<endl ; 


    //  For accessing whole map using for loop 

    // 1st method 
    // This is also called the range base loop 
    for(auto i : map)
    {
        cout<<i.first<<" "<<i.second<<endl ; 
    }

    // 2nd Method 
    // By  using iterators 

    // ek unordered map lenge uske map ke according data type fir uske bad :: iterator i kis ke liye map ke liye aur kaha se iterate karege vo hm karege map.begin()

    unordered_map<string,int> :: iterator i = map.begin();

    while(i!= map.end())
    {
        // yeh likha hai ki i ka first aur i ka secound 
        cout<<i->first<<" "<<i->second<<endl ; 
        i++ ; 
    }
    
    return 0 ;
}