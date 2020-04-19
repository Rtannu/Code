//Minimum time required to produce m items
#include<bits/stdc++.h>
using namespace std;
int Mini_Time_Required(int *array,int no,int item)
         {
                 int time_taken=0;
                 while(1)
                     {
                         int items=0;
                         for(int i=0;i<no;i++)
                              items+=(time_taken/array[i]);
                         if(items>=item)
                               return time_taken;
                         time_taken++;              
                     }
                         
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
