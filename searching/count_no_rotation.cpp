#include<bits/stdc++.h>
//program for counting no of rotation
using namespace std;
int binary_iterative(vector<int> input,int start,int end)
         {
              
              int result=-1; 
              while(start<=end)
                      {
                         int mid=start+(end-start)/2;
                         int next=(mid+1)%(end+1);
                         int pre=(mid+end)%(end+1);
                         if(input[start]<=input[end])
                                  return start;
                         else if(input[mid]<=input[pre] and input[mid]<=input[next])
                                  return mid;
                         else if(input[mid]<=input[end])
                                 end=mid-1;
                         else if(input[mid]>=input[start])
                                 start=mid+1;                             
                                      
                      } 
              return result;          
                       
         }
int main()
     {
          int no,i,a;
          printf("enter the total number do you want to insert in array\n");
          scanf("%d",&no);
          vector<int> input;
          for(i=0;i<no;i++)
                {
                   scanf("%d",&a);
                   input.push_back(a);  
                }
         
          if(binary_iterative(input,0,no-1)==-1)
                printf("number is not found\n");
          else
                printf("array is rotated %d times\n",binary_iterative(input,0,no-1));                             
          return 0;
     }
