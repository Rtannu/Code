#include<bits/stdc++.h>
//program for finding position of first occurrence
using namespace std;
int binary_iterative(vector<int> input,int start,int end,int find)
         {
              
              int result=-1; 
              while(start<=end)
                      {
                          int mid=start+(end-start)/2;
                          
                          if(input[mid]==find)
                               {
                                  result=mid;
                                  end=mid-1;  
                               }
                         else if(input[mid]>find)
                               {
                                  end=mid-1;  
                               }
                         else
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
          printf("enter the number do you want to find\n");
          scanf("%d",&a);      
          if(binary_iterative(input,0,no-1,a)==-1)
                printf("number is not found\n");
          else
                printf("number is found at position:-\t%d\n",binary_iterative(input,0,no-1,a));                             
          return 0;
     }
