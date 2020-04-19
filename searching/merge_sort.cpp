//merge sort
#include<bits/stdc++.h>
using namespace std;
void merge(int *array,int start,int mid,int end)
   {    
        /* printf("pre\n");
         for(int m=start;m<=end;m++)
               cout<<array[m]<<"\t";
         cout<<endl;
         printf("\nend\n"); */     
         int temp[end-start+1];
         int i=start;
         int j=mid+1;
         int k=0;
       
         while(i<=mid and j<=end)
                 {
                     if(array[i]<array[j])
                              temp[k++]=array[i++];
                     else if(array[i]>array[j])
                              temp[k++]=array[j++];
                     else 
                         {
                              temp[k++]=array[i++]; 
                              j++;
                         }              
                 }
         while(i<=mid)
              temp[k++]=array[i++];
         while(j<=end)
              temp[k++]=array[j++];
        /* cout<<"start"<<endl;
         for(i=0;i<k;i++)
              printf("%d\t",temp[i]);
         printf("\nstop\n");       */    
         for( i=end;i>=start;i--)
               array[i]=temp[--k]; 
                  
   }
void merge_sort(int *array,int start,int end)
   {
       if(start>=end)
            return ; 
       int mid=(start+end)/2;
       merge_sort(array,start,mid);
       merge_sort(array,mid+1,end);
       merge(array,start,mid,end);                 
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
    merge_sort(array,0,no-1);
    printf("after sorting:-\t");
    for(i=0;i<no;i++)
        printf("%d\t",array[i]);
    printf("\n");             
    return 0;
   }
