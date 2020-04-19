//Move all zeroes to end of array
#include<bits/stdc++.h>
using namespace std;
void move_zero(int *array,int no)
       {
             int count=0;
             for(int i=0;i<no;i++)
                   {
                      if(array[i]!=0)
                            array[count++]=array[i];  
                   }
                   
                   
             for(int i=0;i<count;i++)
                   printf("%d\t",array[i]);
             printf("\n");              
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
           move_zero(array,no);       
           return 0;
       }
