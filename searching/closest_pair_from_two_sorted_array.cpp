//Find the closest pair from two sorted arrays

#include<bits/stdc++.h>
using namespace std;
void print_closest_from_two_array(int *array1,int *array2,int no1,int no2,int key)                 
      {
           int i=0,j=no2-1;
           int diff=INT_MAX;
           int res_l;
           int res_r;
           
           while(i<no1 and j>=0)
                   {
                      if(abs(array1[i]+array2[j]-key)<diff)
                               {
                                 res_l=i;
                                 res_r=j;
                                 diff=abs(array1[i]+array2[j]-key);      
                               }
                       else if(array1[i]+array2[j]<key)
                                i++;
                       else
                                j--;                  
                   }
           printf("closest number is:-\t%d\t%d\n",array1[res_l],array2[res_r]);        
      }
int main()
       {
          int no1,no2,key;
          printf("enter the size of first array\n");
          scanf("%d",&no1);
          int array1[no1];
          printf("enter the element\n");
          for(int i=0;i<no1;i++)
                  scanf("%d",&array1[i]);
                  
          printf("enter the size of second array\n");
          scanf("%d",&no2);
          int array2[no2];
          printf("enter the element\n");
          for(int i=0;i<no2;i++)
              scanf("%d",&array2[i]);
          printf("enter the key\n");
          scanf("%d",&key);     
          print_closest_from_two_array(array1,array2,no1,no2,key);                              
          return 0;
       }
