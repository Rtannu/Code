//Find the maximum element in an array which is first increasing and then decreasing
#include<bits/stdc++.h>
using namespace std;
int find_max(int *array,int no)
      {
               int start=0;
               int end=no-1;
               while(start<=end)
                      {
                              int mid=start+(end-start)/2;
                              if(array[mid]>=array[(mid+1)%no] and array[mid]>=array[(mid-1+no)%no])
                                            return array[mid];
                              else if(array[mid]>array[(mid-1+no)%no] and array[mid]<array[(mid+1)%no])
                                            start=mid+1;
                              else
                                            end=mid-1;                             
                      }
              return -1;          
      }
int main()
      {
            int no;
            printf("enter the size of array\n");
            scanf("%d",&no);
            int array[no];
            printf("enter  the element\n");
            for(int i=0;i<no;i++)
                     scanf("%d",&array[i]);
            if(-1==find_max(array,no))
                     printf("max is not found\n");
            else
                     printf("max element=%d\n",find_max(array,no));                  
            return 0;
      }
