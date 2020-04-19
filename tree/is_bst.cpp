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
/*bool is_bst(node * root,int min_node,int max_node)
      {
           if(root==NULL)
              return true;
           if(root->data<min_node or root->data>max_node)
              return false;
           return (is_bst(root->left,min_node,root->data) and is_bst(root->right,root->data,max_node));
      }*/
bool is_bst(node * root,int min_node,int max_node)
      {
           if(root==NULL)
                return true ;
           return (root->data>min_node and root->data<max_node and is_bst(root->left,min_node,root->data) and is_bst(root->right,root->data,max_node));
      }



//wrost case
bool is_subtree_smaller(node * root,int value)
      {
         if(root==NULL)
            return true;
         return (root->data<value and is_subtree_smaller(root->left) and is_subtree_smaller(root->right));
      }
bool is_subtree_greater(node * root,int value)
      {
         if(root==NULL)
            return true;
         return (root->data>value and is_subtree_greater(root->left,value) and is_subtree_greater(root->right,value));
      }
bool Is_Bst(node * root)
      {
         if(root==NULL)
             return true;
         if(is_subtree_smaller(root->left,root->data) and is_subtree_greater(root->right,root->data) and Is_Bst(root->left) and Is_Bst(root->right))
             return true;
         else
             return false;
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
        if(is_bst(root,INT_MIN,INT_MAX))
             printf("binary tree is bst\n");
        else
             printf("binary tree is not bst\n");
        return 0;
      }
