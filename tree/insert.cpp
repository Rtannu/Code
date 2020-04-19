#include<bits/stdc++.h>
using namespace std;
struct node
      {
        int data;
        struct node * left;
        struct node * right;
      };
struct node * root=NULL;
struct node * new_node(int data)
       {
           struct node * temp=(struct node *)malloc(sizeof(struct node));
           temp->data=data;
           temp->left=NULL;
           temp->right=NULL;
           return temp;
       }
struct node * insert(struct node * root,int data)
      {
          if(root==NULL)
             root=new_node(data);
          else if(data<root->data)
             root->left=insert(root->left,data);
          else
             root->right=insert(root->right,data);
          return root;
      }
//inorder

void inorder(struct node * root)
      {
          if(root==NULL)
             return ;
          inorder(root->left);
          printf("%d\t",root->data);
          inorder(root->right);
      }
//preorder
void preorder(struct node * root)
      {
          if(root==NULL)
            return ;
          printf("%d\t",root->data);
          preorder(root->left);
          preorder(root->right);
      }

//postorder
void postorder(struct node * root)
      {
          if(root==NULL)
            return ;
          postorder(root->left);
          postorder(root->right);
          cout<<root->data<<"\t";
      }

//min node in tree
struct node * min_node(struct node * root)
      {
          if(root==NULL)
           return NULL;
         else if(root->left==NULL)
           return root;
          min_node(root->left);
      }

//max node in tree
struct node * max_node(struct node * root)
     {
       if(root==NULL)
           return NULL;
       else if(root->right==NULL)
           return root;
       max_node(root->right);
     }
int main()
      {
         int no;
         cout<<"enter the total number do you want to insert in tree\n";
         cin>>no;
         for(int i=0;i<no;i++)
             {
                int num;
                scanf("%d",&num);
                root=insert(root,num);
             }
        printf("tree data in inorder form:-\t");
        inorder(root);
        cout<<endl;
        cout<<"tree data in preorder form:-\t";
        preorder(root);
        cout<<endl;
        cout<<"tree data in postorder form:-"<<"\t";
        postorder(root);
        cout<<endl;
        struct node * temp=min_node(root);
        if(temp==NULL)
             printf("min_node is not found\n");
       else 
             printf("min node :-\t%d\n",temp->data);
       temp=max_node(root);
       if(temp==NULL)
             printf("max node is not found\n");
       else
             printf("max_node:-\t%d\n",temp->data);
       
      }
