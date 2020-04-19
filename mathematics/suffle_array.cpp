//program for shuffle of array
#include<bits/stdc++.h>
using namespace std;
int main()
    {
         int no;
         printf("enter the lenght of array\n");
         scanf("%d",&no);
         int input[no];
         printf("enter the number\n");
         for(int i=0;i<no;i++)
                 scanf("%d",&input[i]);
        srand(time(NULL));
        for(int i=no-1;i>0;i--)
                {
                      int j=rand()%(i+1);
                      swap(input[i],input[j]);
                }
        printf("suffle array:-\n");       
        for(int i=0;i<no;i++)
               {
                    printf("%d\t",input[i]);
               }  
        cout<<endl;                         
    }
