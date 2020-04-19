//Find the repeating and the missing | Added 3 new methods
#include<bits/stdc++.h>
using namespace std;
void repeating_missing(int *array,int no)
       {
                int xor1=0;
                for(int i=0;i<no;i++)
                      xor1=xor1 ^ array[i];
                for(int i=1;i<=no;i++)
                      xor1=xor1 ^ i;
                int set_bit_no=xor1 & ~(xor1-1) ;   
                int x=0;
                int y=0;
                for(int i=0;i<no;i++)
                      {
                            if(set_bit_no & array[i])
                                  x=x ^ array[i];
                            else
                                  y=y ^ array[i];      
                      }
               for(int i=1;i<=no;i++)
                      {
                           if(set_bit_no & i)
                                 x=x ^ i;
                           else
                                 y=y ^ i;      
                      }
                
               printf("first numebr=%d\n",x);
               printf("second number=%d\n",y);                           
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
           repeating_missing(array,no);          
           return 0;
       }
