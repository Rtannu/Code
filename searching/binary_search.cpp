//binary search
#include<bits/stdc++.h>
using namespace std;
bool binary_sea(vector<int> input,int a)
       {
          int start=0;
          int end=input.size()-1;
          while(start<=end)
              {
                 int mid=(start+end)/2;
                 if(input[mid]==a)
                      return true;
                 else if(input[mid]>a)
                      end=mid-1;
                 else
                      start=mid+1;          
              }
          return false;    
       }
int main()
   {
      int no,a;
      printf("enter the total number do you want to insert in array\n");
      scanf("%d",&no);
      printf("enter the number\n");
      vector<int> input;
      for(int i=0;i<no;i++)
            {
                
                 scanf("%d",&a);
                 input.push_back(a);                 
            }
     printf("enter the number for binary search\n");
     scanf("%d",&a);
     if(binary_sea(input,a))
           printf("number is found\n");
     else
           printf("number is not found\n");        
   /*  if(binary_search(input.begin(),input.end(),a))
            printf("number is found\n");
     else
            printf("number is not found\n");   
     cout<<"lower bound\t"<<lower_bound(input.begin(),input.end(),a)-input.begin()<<endl;   */               
     return 0;
   }
