//Babylonian method for square root
#include<bits/stdc++.h>
using namespace std;
unsigned int squareroot(int no)
          {
                int x=no;
                int y=1;
                while(x>y)
                      {
                             x=(x+y)/2;
                             y=no/x;
                      }
               return x;       
          }
int main()
    {
          int no;
          printf("enter the number\n");
          scanf("%d",&no);
          printf("square root of %d:-\t%d\n",no,squareroot(no));
          return 0;
    }

