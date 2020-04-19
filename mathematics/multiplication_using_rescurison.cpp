//Multiply two integers without using multiplication, division and bitwise operators, and no loops
#include<bits/stdc++.h>
using namespace std;
int multiple_of_two_number(int a,int b)
          {
              if(b==0)
                    return 0;
              if(b>0)
                    return (a+multiple_of_two_number(a,b-1));
              if(b<0)
                   return -multiple_of_two_number(a,-b);                 
          }
int main()
     {
         int no1,no2;
         printf("enter the two number\n");
         scanf("%d%d",&no1,&no2);
         cout<<no1<<"x"<<no2<<"="<<multiple_of_two_number(no1,no2)<<endl;
         return 0;
     }
