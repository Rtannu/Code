//Find the minimum element in a sorted and rotated array

#include<bits/stdc++.h>
using namespace std;
int find_min(int *array,int no)
     {
          int start=0;
          int end=no-1;
          if(array[0]<=array[no-1])
                 return array[0];
          while(start<=end)
                 {
                          int mid=start+(end-start)/2;
                          if(array[mid]<array[(mid+1)%no] and array[mid]<array[(mid-1+no)%no])
                                  return array[mid];
                          else if(array[mid]<=array[end])
                                    end=mid-1;
                          else 
                                    start=mid+1;                   
                 }
         return -1;        
     }
int main()
     {
           int no;
           printf("enter the size of array\n");
           scanf("%d",&no);
           int array[no];
           printf("enter the element\n");
           for(int i=0;i<no;i++)
                   scanf("%d",&array[i]);
           int ans=find_min(array,no); 
           printf("mini element:-%d\n",ans);        
           return 0;
     }
