//Program for Fibonacci numbers with space optimization
#include<bits/stdc++.h>
int fibonacci_number(int no)
       {
            if(no<=1)
                  return no;
            return fibonacci_number(no-1)+fibonacci_number(no-2);      
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
