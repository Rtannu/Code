//Search an element in an array where difference between adjacent elements is 1
#include<bits/stdc++.h>
using namespace std;
int  search(int *array,int no,int key)
      {
          int i=0;
          while(i<no)
               {
                     if(array[i]==key)
                          return i;
                     i=i+abs(array[i]-key);
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
           printf("enter the key\n") ;
           scanf("%d",&key);     
           int ans=search(array,no,key);  
           if(ans==-1)
                printf("element is not found\n");
           else
                printf("element %d is at index=%d\n",key,ans);         
           return 0;
      }
