//Count all distinct pairs with difference equal to k
#include<bits/stdc++.h>
using namespace std;
int distinct_pair(int *input,int no,int k)
       {
              int start=0;
              int end=1;
              int count=0;
              sort(input,input+no);
              while(start<no and end<no)
                     {
                           if(input[end]-input[start]==k)
                                  {
                                       count++;
                                       start++;
                                       end++;
                                  }
                           else if(input[end]-input[start]<k)
                                 end++;
                           else 
                                 start++;            
                                  
                     }
              return count;        
       }
int main()
       {
            int no,k;
            printf("enter the size of input\n");
            scanf("%d",&no);
            printf("enter the element\n");
            int input[no];
            
            for(int i=0;i<no;i++)
                  scanf("%d",&input[i]);
            printf("enter the key\n");
            scanf("%d",&k);      
           int ans= distinct_pair(input,no,k); 
           printf("ans:-\t%d\n",ans);     
            return 0;
       }
