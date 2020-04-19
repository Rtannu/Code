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
int node_having_k_nodes(node * root,int k)
      {
          if(root==NULL)
             return 0;
          if(root->left==NULL and root->right==NULL)
             return 1;
          int l=node_having_k_nodes(root->left,k);
          int r=node_having_k_nodes(root->right,k);
          if(l+r==k)
              cout<<root->data<<endl;
          return (l+r);
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
        printf("enter the total leaf node for node\n");
        int leaf;
        scanf("%d",&leaf);
        node_having_k_nodes(root,leaf);
        return 0;
      }
