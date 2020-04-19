//Find the element that appears once in a sorted array
#include<bits/stdc++.h>
using namespace std;
void FindOnce(int *array,int start,int end,int no)
       {//cout<<"roushan raj"<<endl;
            if(end<start)
                   return ;
            if(start==end)
                  {
                       printf("required element:-\t%d\n",array[start]);
                       return ;
                  }           
            int mid=start+(end-start)/2;
            if(mid%2==0)
                  {
                         if(array[mid]==array[(mid+1)%no])
                               FindOnce(array,mid+2,end,no);
                         else 
                               FindOnce(array,start,mid,no);        
                  }
            else
                  {
                         if(array[mid]==array[(mid-1)%no])
                               FindOnce(array,mid+1,end,no);
                         else
                               FindOnce(array,start,mid-1,no);       
                  }                
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
           FindOnce(array,0,no-1,no);        
           return 0;
       }
