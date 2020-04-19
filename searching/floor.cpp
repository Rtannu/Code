//Find the element before which all the elements are smaller than it, and after which all are greater
#include<bits/stdc++.h>
using namespace std;
int Floor(int * array,int no,int key)
     {
             
            int start=0;
            int end=no-1;
            if(array[start]>key)
                   return -1;
            if(array[no-1]<key)
                   return array[no-1];      
            while(start<=end)
                   {
                      int mid=start+(end-start)/2;
                      if(array[mid]==key)
                            return array[mid];
                      else  if(array[(mid-1+no)%no]<=key and array[mid]>key)
                            return array[(mid-1+no)%no];
                      else if(array[mid]>key)
                               end=mid-1;
                      else
                               start=mid+1;                                             
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
         int ans=Floor(array,no,key);
         printf("index of element:-\t%d\n",ans);
         return 0;
     }
