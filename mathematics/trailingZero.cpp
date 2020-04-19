//Count trailing zeroes in factorial of a number
#include<bits/stdc++.h>
using namespace std;
void trailingZero(int no)
         {
                  int total=0;
                  while(no>=1)
                         {
                             total+=(no/5);
                             no=no/5;
                         }
                  printf("trailing 0s in %d! is %d\n",no,total);        
         }
int main()
   {
          int no;
          printf("enter the number\n");
          scanf("%d",&no);
          trailingZero(no);
          return 0;
   }
