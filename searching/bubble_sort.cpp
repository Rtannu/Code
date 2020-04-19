//bubble search
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &input)
     {
           int i,j;
           for(i=0;i<input.size()-1;i++)
                     {
                           int flag=0;
                           for(j=0;j<input.size()-1-i;j++)
                                  {
                                        if(input[j]>input[j+1])
                                             {
                                                swap(input[j],input[j+1]);
                                                flag=1;
                                             }   
                                  }
                          if(flag==0)
                              break;       
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
    bubble_sort(input);       
    printf("sorted array:-\t");       
    for(i=0;i<no;i++)
          printf("%d\t",input[i]);
    printf("\n");                    
    return 0;
   }
