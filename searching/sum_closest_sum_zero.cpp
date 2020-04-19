//Two elements whose sum is closest to zero
#include<bits/stdc++.h>
using namespace std;
void closest_zero(int *array,int no)
     {
          if(no<2)
             {
                 printf("invalid input\n");
                 return ;
             } 
            
           sort(array,array+no);  
           int start=0;
           int end=no-1;
           int min_sum=INT_MAX;
           int min_l=0;
           int min_r=no-1;
           while(start<end)
                   {
                      int sum=array[start]+array[end];
                      if(abs(sum)<abs(min_sum))
                              {
                                    min_sum=sum;
                                    min_l=start;
                                    min_r=end;
                              }   
                        if(sum<0)
                              start++;
                        else
                              end--;            
                   } 
           printf("closest sum=%d\n",min_sum);      
           printf("first number=%d\n",array[min_l]);
           printf("second number=%d\n",array[min_r]);   
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
          closest_zero(array,no);     
     }
