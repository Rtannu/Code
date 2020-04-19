#include<bits/stdc++.h>
//K’th Smallest/Largest Element in Unsorted Array
using namespace std;
int partition(vector<int> &input,int start,int end)
         {
                int pivot=input[end];
                int pindex=start,i;
                for(i=start;i<=end-1;i++)
                        {
                              if(input[i]<=pivot)
                                    {
                                        swap(input[i],input[pindex]);
                                        pindex++;
                                    }
                        }
               swap(input[pindex],input[end]);
               return pindex;         
         }
int kth_smallest(vector<int> &input,int start,int end,int k)
         {
              if(k>0 and (end-start+1>=k))
                     {
                           int pos=partition(input,start,end);
                           if((pos-start)==k-1)
                                   return input[pos];
                           if(pos-start>k-1)
                                   return kth_smallest(input,start,pos-1,k);
                           return kth_smallest(input,pos+1,end,k-pos+start-1);                
                     }
               return INT_MAX;	      
             
         }
int main()
     {
          int no,i,a,k;
          printf("enter the total number do you want to insert in array\n");
          scanf("%d",&no);
          vector<int> input;
          for(i=0;i<no;i++)
                {
                   scanf("%d",&a);
                   input.push_back(a);  
                }
          printf("enter the value of k\n");
          scanf("%d",&k);
        
          printf("array is found at position at %d \n",kth_smallest(input,0,no-1,k));                             
          return 0;
     }
