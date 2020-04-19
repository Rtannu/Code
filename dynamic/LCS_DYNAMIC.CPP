//Dynamic Programming | Set 4 (Longest Common Subsequence)
#include<bits/stdc++.h>
using namespace std;
int max_subsequece(string first,string second)
      {
             int f_len=first.length();
             int s_len=second.length();
             int dynstore[f_len+1][s_len+1];
             for(int i=0;i<=f_len;i++)
                  {
                        for(int j=0;j<=s_len;j++)
                              {
                                     if(i==0 or j==0)
                                          dynstore[i][j]=0;
                                     else if(first[i-1]==second[j-1])
                                          dynstore[i][j]=(1+dynstore[i-1][j-1]);
                                     else 
                                          dynstore[i][j]=max(dynstore[i-1][j],dynstore[i][j-1]);
                                                       
                              }
                  }
                
            return dynstore[f_len][s_len];      
      }
int main()
      { 
        printf("enter the first string\n");
        string first,second;
        cin>>first;
        printf("enter the second string\n");
        cin>>second;
        int ans=max_subsequece(first,second);
        cout<<"LCS:-\t"<<ans<<endl;
        return 0;
      }
