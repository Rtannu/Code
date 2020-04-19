//selection search
#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int> &input)
     {
           int i,j;
           for(i=0;i<input.size()-1;i++)
                     {
                           int min_index=i;
                           for(j=i+1;j<input.size();j++)
                                     {
                                         if(input[j]<input[min_index])
                                                min_index=j;  
                                     }
                           swap(input[min_index],input[i]);          
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
    selection_sort(input);       
    printf("sorted array:-\t");       
    for(i=0;i<no;i++)
          printf("%d\t",input[i]);
    printf("\n");                    
    return 0;
   }
