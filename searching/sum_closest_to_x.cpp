//Given a sorted array and a number x, find the pair in array whose sum is closest to x
#include<bits/stdc++.h>
using namespace std;
int print_closest(int *array,int no,int key)
      {
            int start=0;
            int end=no-1;
            int result=-1;
            int diff=INT_MAX;
            int res_l;
            int res_r;
            
            while(start<end)
                  {
                       if(abs(array[start]+array[end]-key)<diff)
                               {
                                    res_l=start;
                                    res_r=end;
                                    diff=abs(array[start]+array[end]-key);
                               }
                       else if(array[start]+array[end]>key)
                               end--;
                       else
                               start++;        
                                         
                  }
          printf("closest element:-\t%d\t%d\n",array[res_l],array[res_r]);
      }
int main()
       {
          int no,key;
          printf("enter the size of array\n");
          scanf("%d",&no);
          printf("enter the element\n");
          int array[no];
          for(int i=0;i<no;i++)
                 scanf("%d",&array[i]);
          printf("enter the key\n");
          scanf("%d",&key);
          print_closest(array,no,key);                         
          return 0;
       }
