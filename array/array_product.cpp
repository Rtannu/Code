//A Product Array Puzzle
#include<bits/stdc++.h>
using namespace std;
void array_product(int *array,int no)
     {
          int temp=1;
          int product[no];
          for(int i=0;i<no;i++)
                 {
                       product[i]=temp;
                       temp=temp*array[i];
                 }
          temp=1;
          for(int i=no-1;i>=0;i--)
                {
                       product[i]=product[i]*temp;
                       temp=temp*array[i];
                }        
            
          for(int i=0;i<no;i++)
                printf("%d\t",product[i]);
                
          printf("\n");            
                
                
     }
int main()
     {
       int no;
       printf("enter the size of array\n");
       scanf("%d",&no);
       printf("enter the element\n");
       int array[no];
       for(int i=0;i<no;i++)
             scanf("%d",&array[i]);
       array_product(array,no);      
       return 0;
     }
