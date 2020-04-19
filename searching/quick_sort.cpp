//quick sorting
#include<bits/stdc++.h>
using namespace std;
int partition(int *array,int start,int end)
        {
            int i,pivot=array[end];
            int pindex=start;
            for(i=start;i<end;i++)
                  {
                         if(array[i]<=pivot)
                              {
                                    swap(array[i],array[pindex]);
                                    pindex++;
                              }
                  }
           swap(array[pindex],array[end]);
           return pindex;       
        }
void quick_sort(int *array,int start,int end)
        {
             if(start>=end)
                  return ;
             int pindex=partition(array,start,end);
             quick_sort(array,start,pindex-1);
             quick_sort(array,pindex+1,end); 
                                 
        }
int main()
   {
    int no,i;
    printf("enter the total number do you want to insert in array\n");
    scanf("%d",&no);
    int array[no];
    for(i=0;i<no;i++)
         scanf("%d",&array[i]);
    printf("before sorting :-\t");
    for(i=0;i<no;i++)
         printf("%d\t",array[i]);  
    printf("\n");        
    quick_sort(array,0,no-1);
    printf("after sorting:-\t");
    for(i=0;i<no;i++)
        printf("%d\t",array[i]);
    printf("\n");             
    return 0;
   }
