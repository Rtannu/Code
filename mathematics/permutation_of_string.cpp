//Program for permutation
#include<bits/stdc++.h>
using namespace std;
void permutation(string input,int start,int end)
           {
                int i;
                if(start==end)
                     {
                          cout<<input<<endl;
                     }
                else
                    {
                         for(i=start;i<=end;i++)
                                 {
                                       swap(input[i],input[start]);
                                       permutation(input,start+1,end);
                                       swap(input[i],input[start]);
                                 }
                    }     
           }
int main()
       {
           string input;
           printf("enter the string\n");
           cin>>input; 
           cout<<"permutation of string\t"<<input<<":-"<<endl;
           permutation(input,0,input.length()-1);
           return 0;
       }
