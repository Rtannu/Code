//Print All Distinct Elements of a given integer array

#include<bits/stdc++.h>
using namespace std;
int distinct(int *array,int no)
      {
             int i=0;
             sort(array,array+no);
             while(i<no)
                    {
                       
                        while(i<no-1 and array[i]==array[i+1])
                               i++;
                         printf("%d\t",array[i]);   
                         i++;          
                    } 
              printf("\n");      
                  
      }
int main()
      {
           int no;
           printf("array size\n");
           scanf("%d",&no);
           int array[no];
           printf("enter the array element\n");
           for(int i=0;i<no;i++)
                  scanf("%d",&array[i]);
            distinct(array,no);      
           return 0;
      }
