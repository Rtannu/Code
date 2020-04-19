//Leaders in an array
#include<bits/stdc++.h>
using namespace std;
void leader(int *array,int no)
      {
           int max_so_far=array[no-1];
           printf("max_so_far:-\t");
           for(int i=array[no-2];i>=0;i--)
                   { 
                           if(array[i]>max_so_far)
                                  {
                                       cout<<array[i]<<"\t";
                                       max_so_far=array[i];
                                  }
                   }
           printf("\n");        
      }
int main()
      {
          int no;
          printf("enter the size of array\n");
          scanf("%d",&no);
          printf("enter the array element\n");
          int array[no];
          for(int i=0;i<no;i++)
                  scanf("%d",&array[i]);
          leader(array,no);        
          return 0;
      }
