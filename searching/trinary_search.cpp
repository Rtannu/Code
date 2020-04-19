
//trinary search
#include<bits/stdc++.h>
using namespace std;
bool trinary_sea(vector<int> input,int a)
       {
          int start=0;
          int end=input.size()-1;
          while(start<=end)
              {
                 int mid1=start+(end-start)/3;
                 int mid2=mid1+(end-start)/3;
                 if(input[mid1]==a)
                      return true;
                 if(input[mid2]==a)
                      return true;     
                 else if(input[mid1]>a)
                      end=mid1-1;
                 else if(input[mid2]<a)
                     start=mid2+1;
                 else 
                     {
                       start=mid1+1;
                       end=mid2-1;
                     }            
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
     printf("enter the number for trinay search\n");
     scanf("%d",&a);
     if(trinary_sea(input,a))
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
