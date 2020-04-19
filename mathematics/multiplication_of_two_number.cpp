//multiple of two number
#include<bits/stdc++.h>
using namespace std;
int multiple_without(int a,int b)
         {
             int sum=0,no1,no2;
             if(a==0 or b==0)
                   return 0;
             if(a<0 and b<0)
                 {
                       no1=-a;
                       no2=b;
                 }                       
             else if(a<0 and b>0)
                 {
                      no1=b;
                      no2=a;
                 }  
             else if(a>0 and b<0)
                 {
                      no1=a;
                      no2=b;
                 }   
             else 
                 {
                      no1=a;
                      no2=b;
                 }     
             for(int i=1;i<=no1;i++)
                     {
                          sum+=no2;
                     }
             if(a<0 and b<0)
                  sum=-sum;        
             return sum;             
         }
int main()
   {
     int no1,no2;
     printf("enter the two number\n");
     scanf("%d%d",&no1,&no2);
     cout<<"multiple of two number:-\n";
     cout<<no1<<"x"<<no2<<"="<<multiple_without(no1,no2)<<endl;
     return 0;
   }												
