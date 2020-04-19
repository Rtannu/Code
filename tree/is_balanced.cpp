#include<bits/stdc++.h>
using namespace std;
struct node
     {
          int data;
          struct node * left;
          struct node * right;
     };
struct node * root=NULL;
node * new_node(int data)
     {
       node * temp=new node();
       temp->data=data;
       temp->left=NULL;
       temp->right=NULL;
       return temp; 
     }
node * insert(node * root,int data)
     {
       if(root==NULL)
            root=new_node(data);
       else if(data<root->data)
            root->left=insert(root->left,data);
       else
            root->right=insert(root->right,data);
       return root;
     }
void inorder(node * root)
     {
          if(root==NULL)
            return ;
          inorder(root->left);
          cout<<root->data<<"\t";
          inorder(root->right);
     }
int height(node * root)
     {
          if(root==NULL)
             return -1;
        
     }
bool is_height_balanced(node * root)
     {
          if(root==NULL)
           return true;
          int l_h=height(root->left);
          int r_h=height(root->right);
          return (abs(l_h-r_h<=1) and is_height_balanced(root->left) and is_height_balanced(root->right));          
     }
int is_height_balance(node * root)
     {
          if(root==NULL)
             return -1;
          int l_h=is_height_balance(root->left);
          if(l_h==-1)
             return -1;
          int r_h=is_height_balance(root->right);
          if(r_h==-1)
             return -1;
          if(abs(l_h-r_h)>1)
             return -1;
          return (l_h+r_h+1);
            
          
     }
int main()
     {
        int no;
        int num;
        cout<<"enter the total number of element do you want to insert in tree"<<endl;
        cin>>no;
        for(int i=0;i<no;i++)
           {
               cin>>num;
               root=insert(root,num);
           }
        printf("data in inorder form:-\t");
        inorder(root);
        cout<<endl;
        printf("enter the node for ancestor\n");        
        cin>>num;
        printf("ancestor of %d:-\t",num);
        ancestor(root,num);
        cout<<endl;
        return 0;
     }
