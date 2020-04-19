//Find maximum height pyramid from the given array of objects
#include<bits/stdc++.h>
using namespace std;
int max_level(int *array,int no)
      {
              sort(array,array+no);
              int pre_width=array[0];
              int ans=1;
              int pre_count=1;
              int curr_count=0;
              int curr_width=0;
              for(int i=1;i<no;i++)
                     {
                            curr_width+=array[i];
                            curr_count+=1;
                            if(curr_width>pre_width and curr_count>pre_count)
                                    {
                                           pre_width=curr_width;
                                           pre_count=curr_count;
                                           
                                           curr_count=0;
                                           curr_width=0;
                                           ans++;
                                    }
                            
                     }
               return ans;          
      }
int main()
      {
             int no;
             printf("enter the size of array\n");
             scanf("%d",&no);
             int array[no];
             for(int i=0;i<no;i++)
                   scanf("%d",&array[i]);  
             int ans=max_level(array,no);  
             printf("%d\n",ans);     
      }
