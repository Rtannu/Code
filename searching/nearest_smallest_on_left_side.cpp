//Find the nearest smaller numbers on left side in an array
#include<bits/stdc++.h>
using namespace std;
bool NearestSmallestNumber(int *array,int no)
        {
              stack<int> store;
             
              for(int i=0;i<no;i++) 
                {
                     while(not store.empty() and array[i]<store.top())
                                 store.pop();
                    if(store.empty())
                           printf("_\t"); 
                    else
                           printf("%d\t",store.top());
                    store.push(array[i]);                             
                                  
                }
             printf("\n");                   
        }
int main()
       {
          int no;
          printf("enter the size of array\n");
          scanf("%d",&no);
          int array[no];
          printf("enter the element\n");
          for(int i=0;i<no;i++)
                 {
                      scanf("%d",&array[i]);  
                 }
         
         NearestSmallestNumber(array,no);  
         return 0;
       }
