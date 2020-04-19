//program for min heap
#include<bits/stdc++.h>
using namespace std;
void max_heap(int array[],int no)
     {
          for(int i=2;i<=no;i++)
               {
                     int child=i;
                     int parent=child/2;
                     while(child>1 and array[child]<array[parent])
                             {
                                    swap(array[child],array[parent]);
                                    child=parent;
                                    parent=child/2;
                                    if(parent<1)
                                         parent=1; 
                             }
               }
               
          
          for(int i=1;i<=no;i++)
                printf("index=%d\tdata=%d\n",i,array[i]);      
     }
int main()
     {
          int no;
          printf("enter the size of array\n");
          scanf("%d",&no);
          int array[no+1];
          printf("enter the element\n");
          for(int i=1;i<=no;i++)
                scanf("%d",&array[i]);
          max_heap(array,no);       
          return 0;
     }
