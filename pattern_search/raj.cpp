//Searching for Patterns | Set 1 (Naive Pattern Searching)
#include<bits/stdc++.h>
using namespace std;
void kmp(string text,string pattern)
       {
                int array[pattern.length()];
                array[0]=0;
                for(int i=1, j=0;i<pattern.length();i++)
                           {
                                while(pattern[i]!=pattern[j] and j>0)
                                          {
                                               j=array[j-1];  
                                          } 
                                if(pattern[i]!=pattern[j])
                                      array[i]=0;               
                                if(pattern[i]==pattern[j])
                                   {
                                      array[i]=j+1;
                                      j++;
                                   }                                           
                           }
              //  for(int i=0;i<pattern.length();i++)
              //          printf("%d\n",array[i]);   
               
               for(int i=0,j=0;i<text.length();i++)
                       {
                               while(text[i]!=pattern[j] and j>0)
                                    {
                                        j=array[j-1];
                                      //  printf("j=%d\n",j);
                                    }
                               if(pattern[j]==text[i])
                                       {
                                          j++;
                                        //  printf("j1=%d\n",j);
                                       }   
                               if(j==pattern.length())
                                      {
                                         int temp=i-pattern.length()+1;
                                         printf("Found pattern at index %d\n",temp);  
                                        // printf("j2=%d\n",j);
                                         j=0;
                                      }             
                       }        
       }
int main()
       {
           
         string text;
         string pattern;
         printf("enter the text\n");
         cin>>text;
         printf("enter the pattern\n");
         cin>>pattern;
         
         kmp(text,pattern);
         printf("\n") ;            
         return 0;
           
       }
