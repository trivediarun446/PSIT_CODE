#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
//  Circular Queue Implementation 

// Create a tree node structure 

struct TreeNode
{
    struct TreeNode *left_child ; 
    int data ; 
    struct TreeNode *Right_child ; 
};



//                 First of all we will create a queue for storing address of tree nodes 


// Create a Queue class 

struct Queue {
    int size ; 
    int front , rear ; 
    struct TreeNode **arr ;
};

// Initalize the Queue 

void CreateQueue(struct Queue *q , int n )
{
    q->size = n ;
    q->front = q->rear = -1 ; 
    q->arr = (struct TreeNode **)malloc(n*sizeof(struct TreeNode *));
} 

// Create a check full function 
bool isFull(struct Queue q)
{
    return (q.rear + 1)% q.size == q.front ; 
}

// create a check empty function 
bool isEmpty(struct Queue q)
{
    return q.rear == -1 || q.front > q.rear ; 
}

// Create a Enqueue function 
void Enqueue(struct Queue *q , struct TreeNode* val)
{
    // Check is full 
    if(isFull(*q))
    {
        printf("Queue is Full we can not insert any number \n") ; 
        return ; 
    }
    // check is empty 
    if(isEmpty(*q))
    {
        q->front = q->rear = 0 ; 
        q->arr[q->rear] = val ; 
    }
    else{
        q->rear = (q->rear + 1) % q->size ; 
        q->arr[q->rear] = val ; 
    }
}

// Create a Dequeue Function 

struct TreeNode * Dequeue(struct Queue *q )
{
    struct TreeNode *x = NULL ;
    // Is Empty 
    if (isEmpty(*q))
    {
        printf("we can not delete any element in queue because queue is already queue \n" ); 
        
    }
    else{
        x = q->arr[q->front] ; 
        // if only one element is present in queue 
        if(q->front == q->rear)
        {
            q->front = q->rear = -1 ; 
        }
        else 
        {   
            q->front = (q->front+1) % q->size ; 
        }
    }
    return x ;
}

// Create and initalize the root node globally so we can easily access them into the main function 

struct TreeNode *root = NULL ; 


// Create a binary Tree and insert the address into the queue 


void CreateTree()
{
    struct Queue q ; 
    struct TreeNode *p , *t ; 
    // q = (struct TreeNode *)malloc(q->size*sizeof(struct TreeNode)) ; 
    CreateQueue(&q , 50) ;
    root = (struct TreeNode *)malloc(sizeof(struct TreeNode)) ; 
    int x ; 
    printf("Enter the Root Node value \n") ; 
    scanf("%d",&x) ; 
    root->data = x ; 
    root->left_child = root->Right_child = NULL ; 
    // Insert Root Node into the Queue 
    Enqueue(&q , root) ; 
    
    // Insert the next tree root value into the queue 

    while (!isEmpty(q))
    {
       p = Dequeue(&q) ;
       
    //   Inserting Left side element 
    printf("Enter the Left of %d \n ", p->data ) ;
    scanf("%d" ,&x) ;
    if( x != -1)
    {
       t = (struct TreeNode *)malloc(sizeof(struct TreeNode )) ; 
        t->data = x ; 
        t->left_child = t->Right_child = NULL ; 
        p->left_child = t ; 
        Enqueue(&q,t) ; 
    }
    printf("Enter the Right of %d \n ", p->data ) ;
    scanf("%d" ,&x) ;
    if( x != -1)
    {
        t = (struct TreeNode *) malloc(sizeof(struct TreeNode )) ; 
        t->data = x ; 
        t->left_child = t->Right_child = NULL ; 
        p->Right_child = t ; 
        Enqueue(&q,t) ; 
    }
    }
    
}

void Preorder(struct TreeNode *p)
{
    if(p)
    {
        printf("%d " , p->data) ; 
        Preorder(p->left_child) ;
        Preorder(p->Right_child) ;
    }
}

int main ()
{
    CreateTree() ;
  Preorder(root) ;
}
