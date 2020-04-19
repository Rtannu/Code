#include <bits/stdc++.h>
using namespace std;
void first_reapeating(int *array,int no)
    {
          int min_ele=-1;
          unordered_set<int> store;
          for(int i=0;i<no;i++)
               {
                   if(store.find(array[i])!=store.end())  
                         min_ele=array[i];
                   else
                         store.insert(array[i]);         
               }
          printf("first repeating elment=%d\n",min_ele);      
    }
int main()
    {
       int no;
       printf("size of array\n");
       scanf("%d",&no);
       int array[no];
       printf("enter the element\n");
       for(int i=0;i<no;i++)
              scanf("%d",&array[i]);
       first_reapeating(array,no);        
       return 0;
    } 

