#include<iostream>
#include<queue> 

using namespace std ; 

class Node
{
public:
     int val ; 
     Node*left ; 
     Node*right ; 
     Node(int x) 
     {
        val = x ; 
        Node*left = NULL ; 
        Node*right = NULL ; 
     }
};
int main(){
    int root_val ;
    cout << "Enter THe value of root node " << endl ; 
    cin >> root_val ; 
    queue<Node*> q ; 
    Node* root = new Node(root_val) ; 
    q.push(root) ; 
    while (!q.empty())
    {
       Node* temp = q.front() ; 
       q.pop() ; 
       cout<< "Enter Left node value" << endl ; 
       int leftval ;
       cin >> leftval  ; 
       if( leftval != -1){
          temp->left = new Node(leftval) ; 
          q.push(temp->left) ; 
       }
       cout<< "Enter Right value" << endl ; 
       int rightval ; 
       cin >> rightval ; 
       if(rightval != -1 )
       {
        temp->right = new Node(rightval) ; 
        q.push(temp->left) ; 
       }

    }
    
    cout << "Done" << endl ; 
    return 0 ; 
}


