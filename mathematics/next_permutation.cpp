//program for next_permutation
#include<bits/stdc++.h>
using namespace std;
int main()
    {
           string input;
           printf("enter the string\n");
           cin>>input;
           cout<<"permuatation of "<<input<<":-"<<endl;
           sort(input.begin(),input.end());
           do
               {
                    cout<<input<<endl;
               }while(next_permutation(input.begin(),input.end()));
           return 0;
    }
