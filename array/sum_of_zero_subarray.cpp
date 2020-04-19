//Find if there is a subarray with 0 sum
#include<bits/stdc++.h>
using namespace std;
bool subarray_with_zero_sum(int *array,int no)
      {
         unordered_map<int ,bool> sumMap;
         int sum=0;
         for(int i=0;i<no;i++)
                 {
                        sum+=array[i];
                        if(sum==0 or sumMap[sum]==true)
                               return true;
                        sumMap[sum]=true;        
                 }
         printf("roushan raj\n");        
         return false;        
      }
int main()
      {
           int no;
           printf("enter  the size of array\n");
           scanf("%d",&no);
           printf("enter the element\n");
           int array[no];
           for(int i=0;i<no;i++)
                   scanf("%d",&array[i]);
           int ans=subarray_with_zero_sum(array,no);   
           if(ans)
                printf("zero sum is found\n");
           else
                printf("zero sum is not found\n");            
      }
