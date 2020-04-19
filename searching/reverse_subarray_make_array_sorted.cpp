//Check if reversing a sub array make the array sorted
#include<bits/stdc++.h>
using namespace std;
bool CheckReverse(int *array,int no)
       {
           int temp[no];
           for(int i=0;i<no;i++)
                 temp[i]=array[i];
           sort(temp,temp+no);      
           int front,back;
           for(int i=0;i<no;i++)
               {   
                  if(array[i]!=temp[i])
                     {
                           front=i;
                           break;
                     }
               }
           for(int i=no-1;i>=0;i--)
               {
                   if(array[i]!=temp[i])
                          {
                             back=i;
                             break;
                          }
               } 
           
           if(front>=back)
                 return true;
           do
                {
                     front++;
                     if(array[front-1]<array[front])
                           return false;
                } while(front!=back);
           return true;               
                          
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
         bool ans=CheckReverse(array,no);
         if(ans)
               {
                    printf("YES\n");
               }
         else
                    printf("NO\n");                    
         return 0;
       }
