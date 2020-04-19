#include<bits/stdc++.h>
using namespace std;
int search_in_sorted_rotated(vector<int> input,int no,int key)
        {
            int start=0;
            int end=no-1;
            while(start<=end)
                   {
                          int mid=start+(end-start)/2;
                          if(input[mid]==key)
                                   return mid;
                           else if(input[mid]<=input[end])
                                    {
                                          if(key>input[mid] and key<=input[end])
                                                   start=mid+1;
                                           else
                                                   end=mid-1;           
                                    }
                            else
                                   {
                                            if(key<input[mid] and key>=input[start])
                                                     end=mid-1;
                                             else
                                                     start=mid+1;        
                                   }          
                                           
                   }                        
        }
int main()
        { 
            int no,key;
            printf("enter the size of array\n");
            scanf("%d",&no);
            vector<int> input;
            for(int i=0;i<no;i++)
                   {
                         int a;
                         scanf("%d",&a);
                         input.push_back(a);
                   }
            printf("enter the key\n");
            scanf("%d",&key);       
            cout<<"index:-\t"<<search_in_sorted_rotated(input,no,key)<<endl;  
            return 0;
        }
        
