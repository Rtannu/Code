//Given a number, find the next smallest palindrome
#include<bits/stdc++.h>
using namespace std;
int main()
     {
          int t;
          scanf("%d",&t);
          while(t--)
                {  
                    printf("enter the string\n");
                    string input;
                    cin>>input;
                    int len=input.length();
                    int start;
                    int end;
                    int mid=len/2;
                    if(len%2==0)
                          {
                                start=len/2-1;
                                end=len/2;
                          }
                    else
                          {
                                
                                 start=mid-1;
                                 end=mid+1;
                          }
                     while(true)
                          {
                                 if(start<0 and end>=input.length())
                                       {
                                        level:
                                         if(len%2==0)
                                                {
                                                   string t1=input.substr(0,mid);
                                                   int int1=atoi(t1.c_str());
                                                   int1++;
                                                   t1=to_string(int1);
                                                   string t2=t1;
                                                   reverse(t1.begin(),t1.end());
                                                   t2=t2+t1;
                                                   cout<<	t2<<endl;
                                                   break;
                                                     
                                                }
                                           else 
                                               {
                                                   string t1=input.substr(0,mid+1);
                                                   int int1=atoi(t1.c_str());
                                                   int1++;
                                                   t1=to_string(int1);
                                                   string t2=t1;
                                                   reverse(t1.begin(),t1.end());
                                                   t2=t2+t1.substr(1,mid);
                                                   cout<<	t2<<endl;
                                                   break;
                                                   
                                               }     
                                       }
                                   else if(input[start]!=input[end])
                                       {     // cout<<"raj"<<endl;
                                              if(input[start]>input[end])
                                                     {
                                                           for(int i=0;i<=start;i++)
                                                                    {
                                                                          input[input.length()-1-i]=input[i];
                                                                    }
                                                           cout<<input<<endl;  
                                                           break;         
                                                     } 
                                                else
                                                    goto level;     
                                             //  cout<<"roushan"<<endl;      
                                              
                                                    
                                       }    
                                  start--;
                                  end++;     
                                 
                          }           
                    
                }
         
     }
