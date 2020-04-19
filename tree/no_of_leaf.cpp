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
int no_of_leaf(node * root)
     {
        if(root==NULL)
           return 0;
        if(root->left==NULL and root->right==NULL)
           return 1;
        int l=no_of_leaf(root->left);
        int r=no_of_leaf(root->right);
        return (l+r);
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
        printf("no of leaf in tree:-\t");        
        cout<<no_of_leaf(root)<<endl;
        return 0;
     }
