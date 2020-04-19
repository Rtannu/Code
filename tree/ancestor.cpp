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
bool ancestor(node * root,int data)
     {
          if(root==NULL)
             return false;
          if(root->data==data)
             return true;
          if(ancestor(root->left,data))
            {
               cout<<root->data<<"\t";
               return true ;
            }
          if(ancestor(root->right,data))
            {
               cout<<root->data<<"\t";
               return true;
            }
          return false;
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
