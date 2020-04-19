//Sort an array in wave form
#include<bits/stdc++.h>
using namespace std;
void wave_form_sort(int *array,int no)
      {
               for(int i=0;i<no;i+=2)
                        {
                           if(i>0 and array[i-1]>array[i])
                                   swap(array[i-1],array[i]);
                           if(i<no-1 and array[i+1]>array[i]) 
                                   swap(array[i+1],array[i]);               
                        }
               
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
           for(int i=0;i<no;i++)
                  scanf("%d",&array[i]);
           wave_form_sort(array,no);       
           return 0;
      }
