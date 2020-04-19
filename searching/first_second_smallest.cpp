//Find the smallest and second smallest elements in an array
#include<bits/stdc++.h>
using namespace std;
void print_2_smallest(int *array,int no)
    {
         if(no<2)
             {
                 printf("invalid input\n");
                 return ;
             }
          int first;
          int second;
          first=second=INT_MAX;
          for(int i=0;i<no;i++)
                 {
                      if(array[i]<first)
                            {
                              second=first;
                              first=array[i];
                            }
                       else if(array[i]<second and array[i]!=first)
                            {
                               second=array[i];
                            }     
                 } 
           if(second==INT_MAX) 
                 printf("there is no second smallest element\n");
            else
                {
                  printf("first smallest=%d\n",first);
                  printf("second smallest=%d\n",second);
                }                
             
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
          print_2_smallest(array,no);     
     }
