#include<iostream>  
using namespace std;
      struct node  
     {  
          int data; 
          int create()
          struct node *left, *right;  
      };
      int main()  
    {  
       struct node *root;  
       root = create();  
    }  
struct node *create()  
{  
   struct node *temp;  
   int data;  
   int choice;
   temp = (struct node *)malloc(sizeof(struct node));  
   cout<<"Press 0 to exit"<<endl;  
   cout<<"Press 1 for new node"<<endl;  
   cout<<"Enter your choice : ";  
   cin>>choice;   
   if(choice==0)  
{  
return 0;  
}  
else  
{  
   cout<<"Enter the data:";  
   cin>>data;  
   temp->data = data;  
   cout<<"Enter the left child of "<< data;  
   temp->left = create();  
cout<<"Enter the right child of "<< data;  
temp->right = create();  
return temp;   
}  
}  
