//C Program to Sort an array of names or strings
#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b)
           {
               return a<b;
           }
void StringSort(string input[],int no)
            {
                  sort(input,input+no,compare);
                  printf("sorting array string:-\t");
                  for(int i=0;i<no;i++)
                          cout<<input[i]<<endl;
                  printf("\n");        
            }
int main()
      {
           int no;
           printf("enter the size of array\n");
           scanf("%d",&no);
           string input[no];
           for(int i=0;i<no;i++)                   
                 cin>>input[i];
           StringSort(input,no);        
           return 0;
      }
