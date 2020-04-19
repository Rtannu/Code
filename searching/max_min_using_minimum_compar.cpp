//max_eimum and min_eimum of an array using min_eimum number of comparisons
#include<bits/stdc++.h>
using namespace std;
struct pairs
      {
           int min_e;
           int max_e;
           
      };
struct pairs min_e_no_compare(int * array,int start,int end)
     {
          struct pairs minmax,nml,nmr;
          if(start==end)
                {
                    minmax.min_e=array[start];
                    minmax.max_e=array[end];
                    return minmax; 
                }
           if(end=start+1)
                {
                    minmax.min_e=min(array[start],array[end]);
                    minmax.max_e=max(array[start],array[end]);
                    return minmax;
                }
            int mid=start+(end-start)/2;
            nml=min_e_no_compare(array,start,mid);
            nmr=min_e_no_compare(array,mid+1,end);
            if(nml.min_e<nmr.min_e)
                  minmax.min_e=nml.min_e;
            else
                  minmax.min_e=nmr.min_e;
            if(nml.max_e>nmr.max_e)
                  minmax.max_e=nml.max_e;
            else
                  minmax.max_e=nmr.max_e;
            return minmax;                   
                                     
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
          struct pairs ans=min_e_no_compare(array,0,no-1); 
          printf("min element=%d\n",ans.min_e);
          printf("max element=%d\n",ans.max_e);    
     }
