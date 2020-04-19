//Find the smallest number whose digits multiply to a given number n
#include<bits/stdc++.h>
using namespace std;
void findsmallest(int no)
    {
        vector<int> store;
        if(no<10)
            {
              printf("%d\n",(10+no));
              return ;
            }
        for(int i=9;i>1;i--)
               {
                       while(no%i==0)
                            {
                                store.push_back(i);
                                no=no/i;  
                            }
               } 
        if(no>10)
               {
                     printf("not possible\n");
                     return;
               }            
        for(int i=store.size()-1;i>=0;i--)
               printf("%d",store[i]);
        printf("\n");       
                         
        
    }
int main()
    {
        int no;
        printf("enter the number\n");
        scanf("%d",&no);
        findsmallest(no);
        return 0;
    }
