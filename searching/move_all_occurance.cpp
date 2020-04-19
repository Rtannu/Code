//Move all occurrences of an element to end in a linked list
#include<bits/stdc++.h>
using namespace std;
struct node
       {
            struct node * link;
            int data;
       };
struct node * head=NULL;
struct node * end=NULL;        
void insert(int data)
      {
             node * temp= new node;
             temp->link=NULL;
             temp->data=data;
             if(head==NULL and end==NULL )
                    {
                       temp->data=data;
                       head=temp;
                       end=temp;
                    }
             else
                    {
                        end->link=temp;
                        end=temp;
                        
                    }       
      }
      
void print()
     {
             node *temp=head;
             while(temp)
                   {
                        cout<<temp->data<<"\t";
                        temp=temp->link;
                   }
             printf("\n");       
     }       
void move_to_end(int key)
     {
            struct node * nkey=head;
            struct node * pnode=head;
            while(pnode)
                 {
                       if(pnode->data!=key and nkey!=pnode)
                               {
                                    swap(pnode->data,nkey->data);
                                    nkey=nkey->link;
                               }
                       if(nkey->data!=key)
                              nkey=nkey->link;
                       pnode=pnode->link;                 
                 }
           printf("after moving key :-\t");      
           print();      
     }      
            
      
int main()
     {    
          int no,key;
          printf("enter the total number do you want to insert in array\n");
          scanf("%d",&no);
          printf("enter the element\n");
          for(int i=0;i<no;i++)
                 {
                      int a;
                      scanf("%d",&a);
                      insert(a);
                      print();
                 }
          printf("enter the key\n");
          scanf("%d",&key);
          move_to_end(key);       
          return 0;
     }
