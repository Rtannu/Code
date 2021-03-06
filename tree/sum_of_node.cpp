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
int sum_of_all_nodes(node * root)
     {
          if(root==NULL)
             return 0;
          return (root->data+sum_of_all_nodes(root->left)+sum_of_all_nodes(root->right));
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
        printf("summaiton of all nodes in tree:-\t");
        cout<<sum_of_all_nodes(root);
        cout<<endl;
       
        return 0;
     }
