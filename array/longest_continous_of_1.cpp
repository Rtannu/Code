//Find Index of 0 to be replaced with 1 to get longest continuous sequence of 1s in a binary array
#include<bits/stdc++.h>
using namespace std;
int longest_contin(int *array,int no)
      {
           int max_count=0;
           int max_index;
           int pre_zero=-1;
           int pre_pre_zero=-1 ;
           
           
           for(int curr=0;curr<no;curr++)
                  {
                     if(array[curr]==0)
                           {
                             if(curr-pre_pre_zero>max_count)
                                   {
                                       max_count=curr-pre_pre_zero;
                                       max_index=pre_zero;  
                                   } 
                              
                              pre_pre_zero=pre_zero;
                              pre_zero=curr;       
                           }
                  }
                  
             if(no-pre_pre_zero>max_count)
                  max_index=pre_zero;
                  
             return max_index;           
      }
int main()
      {
          int no;
          printf("enter the size of array\n");
          scanf("%d",&no);
          int array[no];
          printf("enter the number\n");
          for(int i=0;i<no;i++)
               scanf("%d",&array[i]);
          int ans=longest_contin(array,no); 
          printf("count=%d\n",ans);           
          return 0;
      }
