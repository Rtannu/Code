//Replace all ‘0’ with ‘5’ in an input Integer
#include<bits/stdc++.h>
using namespace std;
void  replace_zero_with_5(int  no)
         {      
                 static int count=0;
                 count++;
                 if(no<1)
                       return ;
                 int mod=no%10;
                 no=no/10;
                 replace_zero_with_5(no);  
                 //printf("%d\n",mod);  
                 //printf("%d\n",no);
                 static int total=0;
                 if(mod==0)
                       total=total*10+5;
                 else
                       total=total*10+mod;  
                 count--;
                 //printf("count=%d\n",count);
                 if(count==1)
                       printf("%d\n",total);             
         }
int main()
        {
          int no;
          printf("enter the number\n");
          scanf("%d",&no);
          replace_zero_with_5(no);
         // printf("%d\n",no);
          return 0;
       }
