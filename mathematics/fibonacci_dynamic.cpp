//Program for Fibonacci numbers with dynamic
#include<bits/stdc++.h>
int fibonacci_number(int no)
       {
            int fib[no+1],i;
            fib[0]=0;
            fib[1]=1;
            for(i=2;i<=no;i++)
                  {
                      fib[i]=fib[i-1]+fib[i-2];
                  }
            return fib[no];      
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
