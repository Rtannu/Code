//Count number of occurrences (or frequency) in a sorted array
#include<bits/stdc++.h>
using namespace std;
int frequency(int * array,int no,int key,bool flag)
       {
           int start=0;
           int end=no-1;
           int result=-1;
           while(start<=end)
                   {
                          int mid=start+(end-start)/2;
                          if(array[mid]==key)
                                {
                                      result=mid;
                                      if(flag)
                                          end=mid-1;
                                      else
                                          start=mid+1;      
                                }
                          else if(array[mid]<key)
                                {
                                      start=mid+1;
                                }      
                          else
                                      end=mid-1;      
                   }
           return result;                                 
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
           int lower=frequency(array,no,key,true); 
           int upper=frequency(array,no,key,false);
           if(lower==-1 or upper==-1)
                     printf("number is not found\n");
           else
                     printf("frequecy=%d\n",(upper-lower+1));         
           return 0;
       }
