//Search in an array of strings where non-empty strings are sorted
#include<bits/stdc++.h>
using namespace std;
int  search_key(string input[],int no,string key)
       {      
              int start=0;
              int end=no-1;
              while(start<=end)
                       {
                               int mid=start+(end-start)/2;
                               if(input[mid].empty())
                                      {
                                           int left=mid-1;
                                           int right=mid+1;
                                           while(true)
                                               {
                                                   if(left<start and  right>end)
                                                         return -1;
                                                   if(left>=start and (not input[left].empty()))
                                                          {
                                                               mid=left;
                                                               break;
                                                          }
                                                   if(right<=end and (not input[right].empty()))
                                                         {
                                                               mid=right;
                                                               break;
                                                         }       
                                                  left--;
                                                  right++;       
                                               }
                                      }
                              if(input[mid]==key)
                                     return mid;
                              else if(input[mid]<key)
                                      start=mid+1;
                              else
                                      end=mid-1;                        
                       }
       }
int main()
       {
           int no;
           
           string key;
           string input[] =  {"for", "", "", "", "geeks", 
                   "ide", "", "practice", "" , 
                   "", "quiz", "", ""}; 
           printf("enter the key\n");
           cin>>key;
           int len=sizeof(input)/sizeof(input[0]);
           int ans=search_key(input,len,key); 
           if(ans==-1)
                 {
                       printf("string is not found\n");
                 }
           else
                      printf("string is found at position:-\t%d\n",ans);            
           return 0;
       }
