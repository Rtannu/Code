//Count 1’s in a sorted binary array
#include<bits/stdc++.h>
using namespace std;
int count_one(int *array,int no)
      {
            int start=0;
            int end=no-1;
            int result=-1;
            while(start<=end)
                  {
                       int mid=start+(end-start)/2;
                       if(array[mid]==1)
                            {
                                result=mid;
                                start=mid+1;
                            }
                       else if(array[mid]<1)
                             end=mid-1;
                       else 
                             start=mid+1;            
                  }
           return  result;      
      }
int main()
       {
          int no;
          printf("enter the size of array\n");
          scanf("%d",&no);
          printf("enter the element\n");
          int array[no];
          for(int i=0;i<no;i++)
                 {
                     scanf("%d",&array[i]);
                 }
          int ans=count_one(array,no); 
          if(ans==-1)
                printf("number is not found\n");
          else               
                printf("number of 1=%d\n",(ans+1));       
                            
          return 0;
       }
