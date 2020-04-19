//Find the element before which all the elements are smaller than it, and after which all are greater

#include<bits/stdc++.h>
using namespace std;
int FindElement(int * array,int no)
     {
           int LeftMax[no];
           LeftMax[0]=INT_MIN;
           for(int i=1;i<no;i++)                 
                     LeftMax[i]=max(LeftMax[i-1],array[i-1]); 
           int RightMin=INT_MAX;          
           for(int i=no-1;i>=0;i--)
                 {
                     if(array[i]>LeftMax[i] and array[i]<RightMin)
                          return i;
                      RightMin=min(RightMin,array[i]);        
                 }            
            return -1;    
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
               
         int ans=FindElement(array,no);
         printf("index of element:-\t%d\n",ans);
         return 0;
     }
