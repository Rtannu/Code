
//Search an element in a sorted and rotated array
#include<bits/stdc++.h>
using namespace std;
int sorted_roated(int array[],int no,int key)
      {
              int start=0;
              int end=no-1;
              while(start<=end)
                     {
                           int mid=start+(end-start)/2;
                           if(array[mid]==key)
                                  return mid;
                           else if(array[mid]<=array[end])
                                  {
                                          if(array[mid]<key and array[end]>=key)
                                                     start=mid+1;
                                          else 
                                                     end=mid-1;            
                                  } 
                            else
                                  {
                                          if(array[start]<=key and array[mid]>key)
                                                     end=mid-1;
                                           else
                                                     start=mid+1;           
                                  }             
                     }
              return -1;       
      }
int main()
      {
           int no,key;
           printf("enter the size of array\n");
           scanf("%d",&no);
           int array[no];
           printf("enter the element\n");
           for(int i=0;i<no;i++)
                 scanf("%d",&array[i]);
           printf("enter the key\n");
           scanf("%d",&key);       
           int ans=sorted_roated(array,no,key);  
           if(ans==-1)
                 printf("number is not found\n");
           else
                 printf("number is found at position:-\t%d\n",ans);           
      }
