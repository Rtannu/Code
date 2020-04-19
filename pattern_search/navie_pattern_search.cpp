//Searching for Patterns | Set 1 (Naive Pattern Searching)
#include<bits/stdc++.h>
using namespace std;
int main()
       {
           
         string text;
         string pattern;
         printf("enter the text\n");
         cin>>text;
         printf("enter the pattern\n");
         cin>>pattern;
         for(int i=0;i<text.length()-pattern.length()+1;i++)
                    {
                           int j=0,k=i;
                           if(text[i]==pattern[j])
                                {
                                    for(j=0;j<pattern.length();j++)
                                             {
                                               if(text[k++]!=pattern[j])
                                                        break;   
                                             }
                                    if(j==pattern.length())
                                          printf("%d\t",i);              
                                }
                    }
          printf("\n") ;            
         return 0;
           
       }
