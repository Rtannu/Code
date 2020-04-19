//Efficient way to multiply with 7
#include<bits/stdc++.h>
using namespace std;
int multiple_with_7(int no)
       {
          if(no<0)
             no=-no;
           return ((no<<3)-no);                         
                     
       }
int main()
   {
     int no;
     printf("enter the number\n");
     scanf("%d",&no);
     printf("7X%d=%d\n",no,multiple_with_7(no));
     return 0;
   }
