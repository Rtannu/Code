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


//functin to check ,two binary tree is same or not
bool is_same(node * root1,node * root2)
      { 
         if(root1==NULL and root2==NULL)
             return true;
         if(root1==NULL or root2==NULL)
             return false ;
         return (root1->data==root2->data and is_same(root1->left,root2->left) and is_same(root1->right,root2->right));
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
       
        //is_same(root1,root2);
       
      }
