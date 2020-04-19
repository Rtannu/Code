//Write an Efficient C Program to Reverse Bits of a Number
#include<bits/stdc++.h>
using namespace std;
void reverse_bit(int no)
      {
          unsigned int no_of_bits=sizeof(no)*8;
          unsigned int reverse_num=0,i;
         
          for(i=0;i<no_of_bits;i++)
                 {
                    if(no&(1<<i))
                          reverse_num|=(1<<((no_of_bits-1)-i));
                 }
           
           cout<<reverse_num<<endl;                 
      }
int main()
      {
           unsigned int no;
           printf("enter the number\n");
           cin>>no;
           reverse_bit(no);
           return 0;
      }
