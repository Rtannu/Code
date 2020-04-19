//Longest Common Subsequence urisng recursion
#include<bits/stdc++.h>
using namespace std;
int lcs(string first,string second,int f_len,int s_len)
      {
           if(f_len==0 or s_len==0)
                   return 0;
           if(first[f_len-1]==second[s_len-1])
                   return 1+lcs(first,second,f_len-1,s_len-1);
           else
                   return max(lcs(first,second,f_len-1,s_len),lcs(first,second,f_len,s_len-1));                  
      }
int main()
      {
           string first,second;
           printf("enter the first string\n");
           cin>>first;
           printf("enter the second string\n");
           cin>>second;
           int ans=lcs(first,second,first.length(),second.length());
           cout<<"LCS:-\t"<<ans<<endl;
           return 0;
      }
