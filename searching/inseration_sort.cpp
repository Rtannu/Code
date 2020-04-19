//inseration search
#include<bits/stdc++.h>
using namespace std;
void inseration_sort(vector<int> &input)
     {
           int i,j;
           for(i=1;i<input.size();i++)
                     {
                         int k=i;
                         while(input[k-1]>input[k] and k>=1)
                                {
                                  swap(input[k-1],input[k]);
                                  k--;
                                }
                         
                                      
                     }
     }
int main()
   {
      int no,a,i;
      printf("enter the total number do you want to insert in array\n");
      scanf("%d",&no);
      vector<int> input;
      for( i=0;i<no;i++)
            {
                
                 scanf("%d",&a);
                 input.push_back(a);                 
            }
     printf("input array:-\t");       
     for(i=0;i<no;i++)
           {
                 printf("%d\t",input[i]);
           }
    printf("\n");
    inseration_sort(input);       
    printf("sorted array:-\t");       
    for(i=0;i<no;i++)
          printf("%d\t",input[i]);
    printf("\n");                    
    return 0;
   }
