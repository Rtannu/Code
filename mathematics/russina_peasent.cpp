//Russian Peasant (Multiply two numbers using bitwise operators
#include<bits/stdc++.h>
using namespace std;
int russianpeasant(int a,int b)
          {
             int res=0;
             while(b>0)
                  {
                        if(b&1)
                           res+=a;
                        a=a<<1;
                        b=b>>1;     
                  }
              return res;              
                  
          }
int main()
     {
         int no1,no2;
         printf("enter the two number\n");
         scanf("%d%d",&no1,&no2);
         cout<<no1<<"x"<<no2<<"="<<russianpeasant(no1,no2)<<endl;
         return 0;
     }
