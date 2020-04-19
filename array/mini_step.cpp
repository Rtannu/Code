//Count minimum steps to get the given desired array
#include<bits/stdc++.h>
using namespace std;
int countMinOperation(int *array,int no)
      {
             int result=0;
             while(1)
                   {
                      int zero_count=0;
                      int i;
                      for(i=0;i<no;i++)
                           {
                                  if(array[i]&1)
                                        break;
                                  else if(array[i]==0)
                                        zero_count++;
                                              
                           }
                           
                      if(zero_count==no)
                          {
                               return result;
                          }          
                      if(i==no)
                          {
                               for(int i=0;i<no;i++)
                                   array[i]=array[i]/2;
                               result++;              
                          }
                      for(int j=i;j<no;j++)
                          {
                               if(array[j]&1)
                                     array[j]--;
                               result++;       
                          }                
                   }
               return result;    
      }
int main()
      {
          int no;
          printf("enter the size of array\n");
          scanf("%d",&no);
          int array[no];
          printf("enter the array element\n");
          for(int i=0;i<no;i++)
                scanf("%d",&array[i]);
          int ans=countMinOperation(array,no);
          printf("mini_number of count is:-\t%d\n",ans);
          return 0;
      }
