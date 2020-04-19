//Minimum sum of two numbers formed from digits of an array
#include<bits/stdc++.h>
using namespace std;
int Min_Sum(int *array,int no)
      {
             sort(array,array+no);
             int first=0,second=0;
             int flag=1;
             for(int i=0;i<no;i++)
                     {
                         if(flag==1)
                             {
                                 first=(first*10)+array[i];
                                 flag=0;
                             }
                          else
                             {
                                 second=(second*10)+array[i];
                                flag=1;
                             }              
                              
                     }
               return (first+second);       
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
         cout<<"minimum sum of two number:-\t"<<Min_Sum(array,no)<<endl;     
         return 0;
      }
      
