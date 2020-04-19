#include<bits/stdc++.h>
using namespace std;
int binary_iterative(vector<int> input,int start,int end,int find)
         {
               if(start>end)
                     return -1;
               int mid=start+(end-start)/2;
               if(input[mid]==find)
                      return 1;
               else if(input[mid]>find)
                      return binary_iterative(input,start,mid-1,find);
               else
                      return binary_iterative(input,mid+1,end,find);              
                       
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
          if(binary_iterative(input,0,no-1,a)==1)
                printf("number is found\n");
          else
                printf("number is not found\n");                             
          return 0;
     }
