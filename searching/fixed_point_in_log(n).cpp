//Find a Fixed Point in a given array in log(n) time 
#include<bits/stdc++.h>
using namespace std;
int fixed_point(int *array,int no)
             {
                  int start=0;
                  int end=no-1;
                  while(start<=end)
                        {
                              int mid=start+(end-start)/2;
                              if(array[mid]==mid)
                                     return mid;
                              else if(array[mid]<mid)
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
       printf("enter the  array element\n");
       int array[no];
       for(int i=0;i<no;i++)
             scanf("%d",&array[i]);
       if(fixed_point(array,no)==-1)
                  printf("fixed point is not found\n");
       else 
                  printf("fixed point=%d\n",fixed_point(array,no));           
       
       return 0;
       
       
     }
