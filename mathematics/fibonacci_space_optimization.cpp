//Program for Fibonacci numbers with space optimization
#include<bits/stdc++.h>
int fibonacci_number(int no)
       {
            int a=0,b=1;
            if(no==0)
                return a;
            else if(no==1)
               return b;
            else
                   { 
                        int i,c;
                        for(i=2;i<=no;i++)
                            {
                                 c=a+b;
                                 a=b;
                                 b=c; 
                            }
                        return b;          
                   }
       }
using namespace std;
int main()
    {
         int no;
         printf("enter the number\n");
         scanf("%d",&no);
         printf("fibonacci of no=%d\n",fibonacci_number(no));
         return 0;
    }	
