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
       node * temp=new node();
       temp->data=data;
       temp->left=NULL;
       temp->right=NULL;
       return temp; 
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
void inorder(node * root)
     {
          if(root==NULL)
            return ;
          inorder(root->left);
          cout<<root->data<<"\t";
          inorder(root->right);
     }
bool children_sum(node * root)
     {
        /*  int l=0,r=0;
          if(root==NULL or (root->left==NULL and root->right==NULL))
               return true;
          if(root->left)
              l=root->left->data;
          if(root->right)
              r=root->right->data;
          return (root->data==l+r and children_sum(root->left) and children_sum(root->right));*/
          
          if(root==NULL or (root->left==NULL and root->right==NULL))
              return true;
          bool l=children_sum(root->left);
          bool r=children_sum(root->right);
          int l_data=0,r_data=0;
          if(root->left)
              l_data=root->left->data;
          if(root->right)
              r_data=root->right->data;
          return (root->data==l_data+r_data and l and r);
         
     }
int main()
     {
        int no;
        int num;
        cout<<"enter the total number of element do you want to insert in tree"<<endl;
        cin>>no;
        for(int i=0;i<no;i++)
           {
               cin>>num;
               root=insert(root,num);
           }
        printf("data in inorder form:-\t");
        inorder(root);
        cout<<endl;
        if(children_sum(root))
            printf("yes,binary tree has children sum property\n");
        else
            printf("no\n");
        return 0;
     }
