//Sort a linked list that is sorted alternating ascending and descending orders?
#include<bits/stdc++.h>
using namespace std;
struct node 
      {
           int data;
           struct node * link;
      };
struct node * head=NULL;
struct node * end=NULL;   
void print(node * temp)
       {
           
            while(temp)
                 {
                    cout<<temp->data<<"\t";
                    temp=temp->link;   
                 }
            printf("\n");     
       }       
void insert(int data)
       {
             node * temp=new node;
             temp->link=NULL;
             temp->data=data;
             if(head==NULL and end==NULL)
                    {
                          head=temp;
                          end=temp;
                    }
             else
                    {
                           end->link=temp;
                           end=temp;
                    }        
       } 
void merge(node * first,node * second)
       {
             node * final_head=NULL;
             node * final_end=NULL;
             while(first and second)
                    {
                           
                    }
       }       
void seperate()
       {
             node * temp=head;
             node * f_head=NULL;
             node * f_end=NULL;
             node * s_head=NULL;
             node * s_end=NULL;
             
             while(temp)
                   {
                        if(f_head==NULL and f_end==NULL)
                              {
                                   f_head=temp;
                                   f_end=temp;
                              }  
                         else
                              {
                                    f_end->link=temp;
                                    f_end=temp;
                              }      
                         temp=temp->link;
                         if(temp==NULL)
                             {
                               //  printf("roushan raj\n");
                                 break;
                             }
                          printf("mnit\n");       
                         if(s_head==NULL and s_end==NULL)
                              {
                                    s_head=temp;
                                    s_end=temp;  
                              }            
                          else
                              {
                                    s_end->link=temp;
                                    s_end=temp;
                              }     
                          temp=temp->link;      
                   }
               if(f_end)
                  f_end->link=NULL;
               if(s_end)
                  s_end->link=NULL;
               
                print(f_head);              
                print(s_head);          
       }       
  
int main()
     {
             int no;
             printf("enter the size of linked list\n");
             scanf("%d",&no);
             for(int i=0;i<no;i++)
                  {
                      int a;
                      scanf("%d",&a);
                      insert(a); 
                  }
             print(head); 
             seperate();    
             return 0;    
     }
