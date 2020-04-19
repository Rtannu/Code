//Find a peak element
#include<bits/stdc++.h>
using namespace std;
int findpeak(int *array,int no)
       {
              int start=0;
              int end=no-1;
              while(start<=end)
                   {
                            int mid=start+(end-start)/2;
                            if(array[mid]>array[(mid+1)%no] and array[mid]>array[(mid-1+no)%no])
                                     return array[mid];
                            else if(array[mid]<array[(mid-1+no)%no])
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
        if(-1==findpeak(array,no))
               printf("peak is not found\n");
        else
               printf("peak is=%d\n",findpeak(array,no));              
        return 0;
      }
