//Sort an array of large numbers
#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b)
      {
            if(a.length()<b.length())
                  return true;
            else if(a.length()>b.length())
                  return false;
            else if(a<b)
                  return true;
            else if(a>b)
                  return false;                    
      }
void sort_big(string *array,int no)
      {
            sort(array,array+no,compare);
            printf("sorted array:-\t");
            for(int i=0;i<no;i++)
                   cout<<array[i]<<"\t";
            cout<<endl;       
      }
int main()
      {
           int no;
           printf("enter the size of array\n");
           scanf("%d",&no);
           string array[no];
           printf("enter the data\n");
           for(int i=0;i<no;i++)
                 cin>>array[i];
           sort_big(array,no);      
      }
