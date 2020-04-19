//Write an Efficient Method to Check if a Number is Multiple of 3
#include<bits/stdc++.h>
using namespace std;
int multiple_of_3(int no)
       {
                int even_count=0;
                int odd_count=0;
                if(no<0)
                    no=-no;
                if(no==0)
                     return 1;
                if(no==1)
                     return 0;
                while(no)
                     {
                         if(no&1)
                              odd_count++;
                         no=no>>1;
                         if(no&1)
                              even_count++;
                         no=no>>1;          
                     } 
              return multiple_of_3(abs(even_count-odd_count));                     
                     
       }
int main()
   {
     int no;
     printf("enter the number\n");
     scanf("%d",&no);
     if(multiple_of_3(no))
           printf("number is divisble by 3\n");
     else
           printf("number is not divisble by 3\n");      
     return 0;
   }
