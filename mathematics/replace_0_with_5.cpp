//Replace all ‘0’ with ‘5’ in an input Integer
#include<bits/stdc++.h>
using namespace std;
int replace_rec(int no)
           {
                  if(no==0)
                         return 0;
                   int digit=no%10;
                   if(digit==0)
                         digit=5;
                   return replace_rec(no/10)*10+digit;             
           }
int  replace_zero_with_5(int  no)
         {      
                if(no==0)
                       return 5;
                 else
                      return replace_rec(no);       
         }
int main()
        {
          int no;
          printf("enter the number\n");
          scanf("%d",&no);
          printf("ans:-\t%d\n",replace_zero_with_5(no));
         // printf("%d\n",no);
          return 0;
       }
