//Count Possible Decodings of a given Digit Sequence
#include<bits/stdc++.h>
using namespace std;
int decode_digit(string input,int len)
     {
           
            int count[len+1];
            count[0]=1;
            count[1]=1;
            for(int i=2;i<=len;i++)
                   {
                       count[i]=0;
                       if(input[len-1]>'0')
                        count[i]=count[i-1];
                       if(input[len-2]<'2' or input[len-2]=='2' and input[len-2]<'7')
                        count[i]+=count[i-2];    
                   }    
            return count[len];                 
     }
int main()
     {
        string input;
        printf("enter the number\n");
        cin>>input;
        printf("total possible decoding:-\t%d\n",decode_digit(input,input.length()));
        return 0;
     }
