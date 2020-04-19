//Find a pair with the given difference
#include<bits/stdc++.h>
using namespace std;
bool findpair(int *array,int no,int * first,int * second,int diff)
        {
              sort(array,array+no);
              int start=0;
              int end=1;
              while(start<no and end<no)
                    {
                         if(abs(array[start]-array[end])==diff and start!=end)
                                   {
                                        *first=array[start];
                                        *second=array[end];
                                        return true; 
                                   }   
                         else if(abs(array[start]-array[end])>diff)
                                   start++;
                         else
                                  end++;                     
                    }
             return false;        
        } 
int main()
        {
             int no,diff,first,second; ;
             scanf("enter the size of array\n");
             scanf("%d",&no);
             int array[no];
             printf("enter the element\n");
             for(int i=0;i<no;i++)
                  scanf("%d",&array[i]);
             printf("enter the difference\n");  
             scanf("%d",&diff);   
             if(findpair(array,no,&first,&second,diff))
                   printf("pairs:-%d\t%d\n",first,second);
             else
                   printf("number is not found\n");            
             return 0;
        }
