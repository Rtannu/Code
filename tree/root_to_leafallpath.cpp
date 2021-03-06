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
int arr[100];
int i=-1;
void root_to_leaf_all_path(node * root,int sum,int k)
      {
           if(root==NULL)
              return ;
           sum=sum+root->data;
           arr[++i]=root->data;
           if((root->left==NULL and root->right==NULL) and sum==k)
                {
                    for(int j=0;j<=i;j++)
                       cout<<arr[j]<<"\t";
                    cout<<endl;
                }
           root_to_leaf_all_path(root->left,sum,k);
           root_to_leaf_all_path(root->right,sum,k);
           i--;
           sum=sum-root->data;
           
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
        printf("enter the summation\n");
        int sum;
        scanf("%d",&sum);
        root_to_leaf_all_path(root,0,sum);
        return 0;
      }
