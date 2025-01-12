// Write a cpp programe to create and implement the tree using queue in cpp 

#include<iostream>

using namespace std ; 

class Queue ; 
class TreeNode{
    public:
    TreeNode *left ; 
    int data ;
    TreeNode *right ; 
    TreeNode(int x )
    {
        data = x ; 
        left = right = NULL ; 
    }
    void create(TreeNode *root , Queue *q) ; 
    void preorder(TreeNode *root) ; 
    void inorder(TreeNode *root) ; 
    void postorder(TreeNode *root) ; 
};
class Queue{
    public :
    int size ; 
    int front ; int rear ; 
    TreeNode **arr ; 
    Queue(int n )
    {
        size = n ; 
        front = rear = -1 ; 
        arr =  new TreeNode*[n]; 
    }
    void enqueue(TreeNode *val) ;
    struct TreeNode* dequeue() ; 
    bool isFull() ; 
    bool isEmpty() ; 
}; 
bool Queue::isFull()
{
    return (rear+1)%size == front ; 
}
bool Queue::isEmpty()
{
    return (front == -1 && rear == -1) ;
}
void Queue::enqueue(TreeNode *val)
{
//   check is full 
   if(isFull())
   {
       cout<<"Queue is full we can not enter any new node " << endl ; 
       return ; 
   }
//    check is empty 
   if(isEmpty())
   {
       front = rear = 0 ; 
       arr[front] = val ; 
   }
   else{
       rear=(rear+1)%size  ; 
       arr[rear] = val ; 
   }
}
TreeNode* Queue :: dequeue()
{
    TreeNode* x = NULL ; 
    // Is Empty
    if(isEmpty())
    {
        cout<<"Queue is already empty "<<endl ; 
    }
    else{
        x= arr[front] ; 
        if(front == rear )
        {
            front = rear = -1 ; 
        }
        else{
            front = (front+1)%size ; 
        }
    }
    return x ;
}

void TreeNode::create(TreeNode *root , Queue *q)
{
    int x ; 
    TreeNode *p , *t ; 
    while(!q->isEmpty())
    {
        
        p = q->dequeue() ; 

        cout<<"Enter the left child of " << p->data << endl ; 
        cin >> x ; 
        if(x != -1 ){
        t = new TreeNode(x) ; 
        p->left = t ; 
        q->enqueue(t);
        }
        cout<< "Enter the right child of " << p->data << endl ; 
        cin >> x ; 
        if(x != -1 )
        {
         t = new TreeNode(x) ;
         p->right = t ; 
         q->enqueue(t) ; 
        }

    }
}

void TreeNode::preorder(TreeNode *p)
{
    if(p)
    {
        cout<<p->data<< " " ; 
        preorder(p->left);
        preorder(p->right) ; 
    }
}
void TreeNode::inorder(TreeNode *p)
{
    if(p)
    {
        
        inorder(p->left);
        cout<<p->data<< " " ; 
        inorder(p->right) ; 
    }
}
void TreeNode::postorder(TreeNode *p)
{
    if(p)
    {
        postorder(p->left);
        postorder(p->right) ;
        cout<<p->data<< " " ; 
    }
}
int  main()
{
    TreeNode *root ; 
    int x ; 
    cout<<"Enter the root node element " << endl ; 
    cin >> x ; 
    Queue *q = new Queue(50) ; 
    root = new TreeNode(x) ; 
    q->enqueue(root) ; 
    root->create(root ,q) ;
    return 0 ; 
}
