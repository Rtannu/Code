#include<bits/stdc++.h>
using namespace std;
struct node 
      {
         int data;
         struct node * left;
         struct node * right;
      };
node * root=NULL;
node * new_node(int data)
      {
          node * temp=new node;
          temp->left=NULL;
          temp->right=NULL;
          temp->data=data;
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
node * lca_bst(node * root,int n1,int n2)
      {
           if(root==NULL)
              return NULL;
           if(root->data>max(n1,n2))
              return lca_bst(root->left,n1,n2);
           else if(root->data<min(n1,n2))
              return lca_bst(root->right,n1,n2);
           return root; 
      }
int main()
      {
         int no,num;
         printf("enter the total number do you want to insert in tree\n");
         scanf("%d",&no);
         for(int i=0;i<no;i++)
             {
              
               cin>>num;
               root=insert(root,num);
             }
        printf("data in inorder:-\t");
        inorder(root);
        cout<<endl;
       
      }
