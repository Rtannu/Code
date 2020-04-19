//Convert array into Zig-Zag fashion
#include<bits/stdc++.h>
using namespace std;
void zig_zag(int *array,int no)
         {
               for(int i=0;i<no;i+=2)
                      {
                              if(i>0 and array[i-1]<array[i])
                                     swap(array[i-1],array[i]);
                              if(i<no-1 and array[i]>array[i+1])
                                     swap(array[i],array[i+1]);       
                      }
                      
              printf("array in zig-zag fashion:-\t");        
              for(int i=0;i<no;i++)
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
              zig_zag(array,no);       
              return 0;
        }
