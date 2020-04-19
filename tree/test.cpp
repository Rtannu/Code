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
node * min_value(node * root)
      {
           if(root==NULL)
              return NULL;
           if(root->left==NULL)
              return root;
           min_value(root->left);
      }
node * delete_node(node * root,int data)
      {
           if(root==NULL)
              return root;
           else if(data<root->data)
              root->left=delete_node(root->left,data);
           else if(data>root->data)
              root->right=delete_node(root->right,data);
           else
              {
                if(root->left==NULL and root->right==NULL)
                        {
                             root=NULL;
                             return root;
                        }
                else if(root->left==NULL)
                        {
                             root=root->right; 
                             return root;
                        }
                else if(root->right==NULL)
                        {
                             root=root->left;
                             return root;
                        }
                 else
                        {
                             node * temp=min_value(root->right);
                             root->data=temp->data;
                             root->right=delete_node(root->right,temp->data);
                        }
              }
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
        cout<<"enter the node for deletion"<<endl;
        cin>>num;
        root=delete_node(root,num);
        printf("tree after the deletion:-\t");
        inorder(root);
        cout<<endl;
      }
