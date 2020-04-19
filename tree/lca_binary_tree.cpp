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
          struct node * temp=new node;
          temp->data=data;
          temp->left=NULL;
          temp->right=NULL;
          return temp;
      }
void inorder(node * root)
      {
          if(root==NULL)
              return ;
          inorder(root->left);
          cout<<root->data<<"\t";
          inorder(root->right);
      }
node * insert(node * root,int data)
      {
          if(root==NULL)
              return root=new_node(data);
          node * temp=root;
          queue<node *> store;
          store.push(temp);
          while(!store.empty())
               {
                   temp=store.front();
                   store.pop();
                   if(temp->left)
                        store.push(temp->left);
                   if(temp->left==NULL)
                        {
                            temp->left=new_node(data);
                            break;
                        }
                   if(temp->right)
                       store.push(temp->right);
                   if(temp->right==NULL)
                       { 
                            temp->right=new_node(data);
                            break;
                       }
               }
           return root;
      }
node * lca_binary_tree(node * root,int n1,int n2)
      {
            if(root==NULL)
               return NULL;
            if(root->data==n1 or root->data==n2)
               return root;
            node * l=lca_binary_tree(root->left,n1,n2);
            node * r=lca_binary_tree(root->right,n1,n2);
            if(l!=NULL and r!=NULL)
               return root;
            if(l==NULL and r==NULL)
               return NULL;
            return ( l!=NULL ? l:r );
                 
      }
int main()
      {
        int no,num;
        printf("enter the total number to insert in binary tree\n");
        cin>>no;
        for(int i=0;i<no;i++)
             {
                printf("enter the number\n");
                scanf("%d",&num);
                root=insert(root,num);
             }
        printf("binary tree in inorder form:-\t");
        inorder(root);
        cout<<endl;
        int n1,n2;
        printf("enter the two data\n");
        cin>>n1>>n2;
        node * temp=lca_binary_tree(root,n1,n2);
        cout<<temp->data<<endl;
        return 0;
      }
