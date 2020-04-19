#include<bits/stdc++.h>
using namespace std;
int missing_number(vector<int> input,int no)
        {
            int x1=0;
            int x2=0;
            for(int i=0;i<no;i++)
                 x1=x1 xor input[i];
                 
                 
                 
             for(int i=1;i<=no+1;i++)
                 x2=x2 xor i;
                
              return (x1 xor x2);  
                     
                      
        }
int main()
        { 
            int no;
            printf("enter the size of array\n");
            scanf("%d",&no);
            vector<int> input;
            for(int i=0;i<no;i++)
                   {
                         int a;
                         scanf("%d",&a);
                         input.push_back(a);
                   }
            cout<<"missing number:-\t"<<missing_number(input,no)<<endl;  
            return 0;
        }
        
