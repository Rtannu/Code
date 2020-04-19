//Count Possible Decodings of a given Digit Sequence
#include<bits/stdc++.h>
using namespace std;
int decode_digit(string input,int len)
     {
            if(len==0 or len==1)
                  return 1;
            int count=0;
            if(input[len-1]>'0')
                  count=decode_digit(input,len-1);
            if(input[len-2]<'2' or input[len-2]=='2' and input[len-2]<'7')
                count+=decode_digit(input,len-2);
                
            return count;                 
     }
int main()
     {
        string input;
        printf("enter the number\n");
        cin>>input;
        printf("total possible decoding:-\t%d\n",decode_digit(input,input.length()));
        return 0;
     }
