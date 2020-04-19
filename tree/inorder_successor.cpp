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
node * find_node(node * root,int data)
      {
          if(root==NULL)
                return NULL;
          else if(root->data==data)
                return root;
          else if(data<root->data)
                return find_node(root->left,data);
          else 
                return find_node(root->right,data);
                     
      }
node * inorder_successor(node * root,int data)
      {
           node * current=find_node(root,data);
           if(current==NULL)
             return NULL;
           else if(current->right!=NULL)
             return min_value(current->right,data);
           else
               {
                    node * successor=NULL;
                    node * ancestor=root;
                    while(current!=ancestor)
                         { 
                             if(ancestor->data>current->data)
                                     {
                                           successor=ancestor;
                                           ancestor=ancestor->left;
                                     }
                             else
                                     ancestor=ancestor->right;
                         }
                     return successor;
               }
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
        printf("enter the value for inorder successor\n");
        cin>>num;
        inorder_successor(root,num);
      }
