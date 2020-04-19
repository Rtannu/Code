//Find next greater number with same set of digits
#include<bits/stdc++.h>
using namespace std;
void next_greater_number(vector<int> input,int len)
     {
         int i,pos;
         for( i=len-1;i>=1;i--) 
                {
                     if(input[i-1]<input[i])
                          {
                              pos=i-1;
                              break;  
                          }
                }
          if(i<1)
              {
                  printf("not possible\n");
                  return ;
              }
          int min_pos=min_element(input.begin()+pos+1,input.end())-input.begin();
          swap(input[pos],input[min_pos]);
          sort(input.begin()+pos+1,input.end());
          for(int i=0;i<len;i++)
               printf("%d",input[i]);
          printf("\n");            
                  
                           
     }
int main()
     {
        vector<int> input;
        printf("enter the total number do you want to insert in array\n");
        int no;
        scanf("%d",&no);
        printf("enter the number\n");
        for(int i=0;i<no;i++)
                {
                     int a;
                     scanf("%d",&a);
                     input.push_back(a);
                }
        
        next_greater_number(input,input.size());
        return 0;
     }
