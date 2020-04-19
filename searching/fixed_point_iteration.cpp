//Find a Fixed Point in a given array
#include<bits/stdc++.h>
using namespace std;
int fixed_point(int *array,int no)
             {
                    for(int i=0;i<no;i++)
                             {
                                 //  printf("index=%d\tnumber=%d\n",i,array[i]);
                                   if(i==array[i])
                                           return i;
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
