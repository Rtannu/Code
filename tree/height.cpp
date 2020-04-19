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


//height of tree
int height(node * root)
      {
         if(root==NULL)
               return -1;
         int l_h=height(root->left);
         int r_h=height(root->right);
         return (1+max(l_h,r_h));
      }

int main()
      {
         int no;
         printf("enter the total number do you want to insert in tree\n");
         scanf("%d",&no);
         for(int i=0;i<no;i++)
             {
               int num;
               cin>>num;
               root=insert(root,num);
             }
        printf("data in inorder:-\t");
        inorder(root);
        cout<<endl;
       
        printf("height of tree:-\t");
        cout<<height(root);
        cout<<endl;
       
      }
