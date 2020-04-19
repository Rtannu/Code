//Largest Sum Contiguous Subarray(kadane algorithm)
#include<bits/stdc++.h>
using namespace std;
int kadane_algo(int *array,int no)
      {
            /*  int max_so_far=INT_MIN;
              int max_ending_here=0;
              for(int i=0;i<no;i++)
                       {
                             max_ending_here+=array[i];
                             if(max_ending_here<0)
                                       max_ending_here=0;
                             if(max_ending_here>max_so_far)
                                       max_so_far=max_ending_here;          
                       }
              return max_so_far;  
              */ 
              
              
              //alternative approach
              int curr_sum=0;
              int max_so_far=INT_MIN;
              for(int i=0;i<no;i++)
                    {
                         curr_sum=max(array[i],curr_sum+array[i]);
                         max_so_far=max(max_so_far,curr_sum);  
                    }      
              return max_so_far;      
      }
int main()
      {
            int no;
            printf("enter the size of array\n");
            scanf("%d",&no);
            int array[no];
            for(int i=0;i<no;i++)
                    scanf("%d",&array[i]);
            int ans=kadane_algo(array,no);  
            cout<<"MAX CONTIGUOUS SUM:-\t"<<ans<<endl;       
            return 0;
      }
