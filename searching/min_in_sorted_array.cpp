//Find the minimum element in a sorted and rotated array
#include<bits/stdc++.h>
using namespace std;
int findmin(int * array,int no)
      {
          int start=0;
          int end=no-1;
          while(start<=end)
                {
                      if(array[start]<=array[end])
                              return array[start];
                      int mid=start+(end-start)/2;
                      if(array[mid]<=array[(mid+1)%no] and array[mid]<=array[(mid-1+no)%no])
                               return array[mid];
                      else if(array[mid]<=array[end])
                              end=mid-1;
                      else if(array[start]<=array	[mid])
                             start=mid+1;                                                      
                }
          return -1;      
      }
int main()
      {
       int no;
       printf("enter the size of array\n");
       scanf("%d",&no);
       int array[no] ;
       printf("enter the element\n");
       for(int i=0;i<no;i++)
                scanf("%d",&array[i]);
       if(-1==findmin(array,no))
               printf("number is not found\n");
       else
               printf("smallest element:-%d\n",findmin(array,no));                  
       return 0;
      }
