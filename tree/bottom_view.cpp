#include<bits/stdc++.h>
using namespace std;
struct node
     {
          int data;
          int dis;
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
void bottom_view(node * root)
     {
          map<int ,int >mapping;
          if(root==NULL)
            return;
          queue<node *> store;
          node * temp=root;
          temp->dis=0;
          store.push(temp);
          mapping[temp->dis]=temp->data;
          while(not store.empty())
             {
               temp=store.front();
               store.pop();
               if(temp->left)
                    {
                       temp->left->dis=temp->dis-1;
                       mapping[temp->left->dis]=temp->left->data;
                       store.push(temp->left);
                    }
               if(temp->right)
                    {
                       temp->right->dis=temp->dis+1;
                       mapping[temp->right->dis]=temp->right->data;
                       store.push(temp->right);
                    }
             }
          map<int,int>::iterator it;
          for(it=mapping.begin();it!=mapping.end();it++)
               {
                   cout<<it->first<<"\t"<<it->second<<endl;
               }
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
        bottom_view(root);
        return 0;
     }
