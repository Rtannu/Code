//Find position of an element in a sorted array of infinite numbers
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int * array,int l,int h,int key)
       {     
             while(l<=h)
                   {
                         int mid=l+(h-l)/2;
                         if(array[mid]==key)
                               return mid;
                         else if(array[mid]<key)
                                  l=mid+1;
                         else
                                  h=mid-1;                
                   }
            return -1;        
       }
int findposition(int *array,int key)
       {
              int l=0,h=1;
              int val=array[0];
              while(val<key)
                     {
                        l=h;
                        h=2*h;
                        val=array[h];   
                     }
             return  binarysearch(array,l,h,key);        
       }
int main()
       {
           int array[] = {3, 5, 7, 9, 10, 90, 100, 130,
                               140, 160, 170};
           int key;
           printf("enter the key\n");
           scanf("%d",&key);
           int ans=findposition(array,key);  
           if(ans==-1)
                 printf("number is not found\n");
           else
                 printf("position of number =%d\n",ans);                                        
          return 0;
       }
