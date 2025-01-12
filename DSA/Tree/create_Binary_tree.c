// Write a c progrme to create a binary tree using queue 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


// Sir se yeh puchhna hai 

// ==> Sir yeh hm double pointer kyu le rhe hai . Is ka logic nhi smjh mein a raha hai 
// ==> sir yeh bhi hmko bata di jiye jaise hm struct treeNode name ki class banayi hai 
// us ke andar hm ne struct treeNode name ka variable create kare ge to kya 
// vo us ke bhi 3 part ho ge 

// This is a pointer type for implementing tree 


// Tree node 
struct TreeNode{
    struct TreeNode *Left_Child ; 
    int data ; 
    struct TreeNode *Right_child ; 
};
struct Queue
{
    int size ;
    int front ; 
    int rear ;
    // Yaha par pointer to pointer ki help se hi kam kar raha hai aisa kyu 
    // Single pointer laga kar ke kar rahe to yeh ek error de raha hai 
    struct TreeNode **arr ; 
};

void createQueue(struct Queue *q, int size)
{
  q->size = size ; 
  q->front = -1 ; 
  q->rear = -1 ;
  q->arr = (struct TreeNode**)malloc(q->size*sizeof(struct TreeNode *));
}
bool isFull(struct Queue *q)
{
 return q->rear == q->size - 1 ; 
}
bool isEmpty( struct Queue *q)
{
  return q->front == -1 || q->front > q->rear;
}
void enqueue(struct Queue *q , struct TreeNode* x )
{
     if (isFull(q)) {
        printf("Queue is full. Cannot insert.\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = q->rear = 0;
    } else {
        q->rear++;
    }
    q->arr[q->rear] = x;
    printf("Inserted %d into the queue.\n", x->data);
}

struct TreeNode* dequeue(struct Queue *q) {
   if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return NULL;
    }
    struct TreeNode *temp = q->arr[q->front];
    q->front++;
    return temp;
}


// Root Node of tree 

struct TreeNode *root = NULL ;
// Create a tree 

void createTree()
{
   struct TreeNode *p ;
   struct TreeNode *t ; 
   int x ; 
   struct Queue q ; 
   createQueue(&q , 50) ;
   printf("Enter the value of root node \n") ; 
   scanf("%d",&x) ; 
   root = (struct TreeNode*)malloc(sizeof(struct TreeNode)) ;
   root->data = x ; 
   root->Left_Child = root->Right_child = NULL ; 
   enqueue(&q,root) ; 
   printf("Root value is inserted \n") ;

   while (!isEmpty(&q))
   {
       p = dequeue(&q) ;
       printf("Enter the left child of a %d\n ",p->data);
       scanf("%d",&x) ;
       if(x!= -1) 
       {
        t = (struct TreeNode *) malloc(sizeof(struct TreeNode )) ; 
        t->data = x ; 
        t->Left_Child = t->Right_child = NULL ; 
        p->Left_Child = t ; 
        enqueue(&q,t) ;
        }
        printf("Enter the right child of %d \n " ,p->data);
       scanf("%d",&x) ;
       if(x!= -1) 
       {
        t = (struct TreeNode *) malloc(sizeof(struct TreeNode )) ; 
        t->data = x ; 
        t->Left_Child = t->Right_child = NULL ; 
        p->Right_child = t ; 
        enqueue(&q,t) ;
        }
   }
   
}

// Preorder Traversal of tree 

void Preorder(struct TreeNode *p)
{
    if(p)
    {
        printf("%d " , p->data) ; 
        Preorder(p->Left_Child) ;
        Preorder(p->Right_child) ;
    }
}

void Inorder(struct TreeNode *p)
{
    if(p)
    {
         
        Inorder(p->Left_Child) ;
        printf("%d " , p->data) ;
        Inorder(p->Right_child) ;
    }
}
void Postorder(struct TreeNode *p)
{
    if(p)
    {
        
        Postorder(p->Left_Child) ;
        Postorder(p->Right_child) ;
        printf("%d " , p->data) ; 
    }
}
int main()
{
 
  createTree() ;
  Preorder(root) ;
  printf("\n") ;
  Inorder(root) ; 
  printf("\n") ;
  Postorder(root);
  return 0 ; 
}
