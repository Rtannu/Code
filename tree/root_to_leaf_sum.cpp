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

bool root_to_leaf_sum(node * root,int sum)
      {
            if(root==NULL)
               return false ;
            if(root->left==NULL and root->right==NULL)
               {
                 if(sum==root->data)
                      return true;
                 else
                      return false;
               }
            if(root_to_leaf_sum(root->left,sum-root->data))
                      return true;
            if(root_to_leaf_sum(root->right,sum-root->data))
                      return true;
            return false;
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
        cout<<"enter the summation"<<endl;
        int sum;
        cin>>sum;
        if(root_to_leaf_sum(root,sum))
             cout<<"summation is found"<<endl;
        else
             cout<<"summation is not found"<<endl; 
        
       
      }
