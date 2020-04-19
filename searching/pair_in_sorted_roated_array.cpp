//Given a sorted and rotated array, find if there is a pair with a given sum
#include<bits/stdc++.h>
using namespace std;
bool PairInSortedRoatedArray(int *array,int no,int key)
        {
             int i;
             for( i=0;i<no-1;i++)
                     {
                           if(array[i]>array[i+1])
                                   break;
                     }
             int start=(i+1)%no;
             int end=i;
             while(start!=end)
                    {
                          if(array[start]+array[end]==key)
                                    return true;
                          else if(array[start]+array[end]<key)
                                 start=(start+1)%no;
                          else
                                 end=(end-1+no)%no;                     
                    }
                    
                    
             return false;       
                              
        }
int main()
       {
          int no,key;
          printf("enter the size of array\n");
          scanf("%d",&no);
          int array[no];
          printf("enter the element\n");
          for(int i=0;i<no;i++)
                 {
                      scanf("%d",&array[i]);  
                 }
          printf("enter the key\n");
          scanf("%d",&key);       
          bool ans=PairInSortedRoatedArray(array,no,key);  
          if(ans)
               printf("number is found\n");
          else
               printf("number is not found\n");             
          return 0;
       }
