//Sort an array of 0s, 1s and 2s
#include<bits/stdc++.h>
using namespace std;
void Sort_012(int *array,int no)
     {
           int zero_p=0;
           int one_p=0;
           int two_p=no-1;
           while(one_p<=two_p)
                {
                       if(array[one_p]==0)
                           {
                              swap(array[one_p],array[zero_p]);
                              one_p++;
                              zero_p++;
                           }   
                       else if(array[one_p]==1)
                           {
                                one_p++;
                           }
                      else if(array[one_p]==2)
                           {
                               swap(array[one_p],array[two_p]);
                               two_p--;  
                           }     
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
           printf("enter the element\n");
           int array[no];
           for(int i=0;i<no;i++)
                 scanf("%d",&array[i]);
           Sort_012(array,no);      
           return 0;
     }
