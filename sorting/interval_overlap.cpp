//Check if any two intervals overlap among a given set of intervals
#include<bits/stdc++.h>
using namespace std;
struct node
      {
            int x;
            int y;
      };
bool compare(struct node a,struct node b)
       {
            return a.x < b.x;
       }      
bool interval_overlap(struct node *input,int no)
    {
         sort(input,input+no,compare);
         for(int i=1;i<no;i++)
                if(input[i-1].y>input[i].y)
                        return true;
        return false;                
    }      
int main()
    {
          int no;
          printf("enter the size of array\n");
          scanf("%d",&no);
          struct node input[no];
          printf("enter the element in pair\n");
          for(int i=0;i<no;i++)
                 scanf("%d%d",&input[i].x,&input[i].y);
          bool ans=interval_overlap(input,no);   
          if(ans)
                printf("number is found\n");
          else
                printf("number is not found\n");           
          return 0;
    }
