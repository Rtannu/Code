//Minimum time required to produce m items
#include<bits/stdc++.h>
using namespace std;
int Min_Time(int * array,int no,int time_taken)
         {
                int item=0;
                for(int i=0;i<no;i++)
                      {
                          item+=(time_taken/array[i]);
                      }
                return item;       
         }
int Mini_Time_Required(int *array,int no,int item)
         {
               int start=1;
               int end=item*array[no-1];
               while(start<end)
                     {
                        int mid=start+(end-start)/2;
                        int ans=Min_Time(array,no,mid);
                        if(ans<item)
                            start=mid+1;
                        else
                            end=mid;     
                          
                     } 
              return end;        
                         
         }
int main()
   {
        int no,item;
        printf("enter the size of array\n");
        scanf("%d",&no);
        printf("enter the element\n");
        int array[no];
        for(int i=0;i<no;i++)
               {
                  scanf("%d",&array[i]);    
               }
        printf("enter the item\n");
        scanf("%d",&item);  
        cout<<"MINI_TIME_REQUIRED:-\t"<<Mini_Time_Required(array,no,item)<<endl;      
        return 0;
   }
