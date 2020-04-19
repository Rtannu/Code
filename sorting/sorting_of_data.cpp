//How to sort an array of dates in C/C++?
#include<bits/stdc++.h>
using namespace std;
struct node
     {
           int day;
           int month;
           int year;
     };
bool compare(struct node a,struct node b)
     {
            if(a.year<b.year)
                   return true;
            else if(a.year== b.year and a.month<b.month)
                   return true;
            else if(a.year==b.year and a.month==b.month and a.day<b.day)
                   return true;
            else 
                   false;                   
     }     
void date_sort(struct node * input,int no)
     {
           sort(input,input+no,compare);
           for(int i=0;i<no;i++)
                  printf("%d\t%d\t%d\n",input[i].day,input[i].month,input[i].year);
     }     
int main()
     {
         int no;
         printf("enter the size of array\n");
         scanf("%d",&no);
         struct node input[no];
         for(int i=0;i<no;i++)
               scanf("%d%d%d",&input[i].day,&input[i].month,&input[i].year);
         date_sort(input,no);     
         return 0;
     }
