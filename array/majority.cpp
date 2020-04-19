//Majority Element
#include<bits/stdc++.h>
using namespace std;
void majority(int *array,int no)
      {
            int count=0;
            int canidate;
            for(int i=0;i<no;i++)
                  {
                         if(count==0)
                                {
                                      canidate=array[i];
                                      count++;
                                }
                         else
                               {
                                      if(canidate==array[i])
                                             count++;
                                      else
                                             count--;        
                               }       
                  }
            count=0;     
            for(int i=0;i<no;i++)
                    {
                         if(array[i]==canidate)
                               count++;  
                    }
            if(count>no/2)
                    printf("canidate:-\t%d\n",canidate);  
            else
                    printf("canidate is not found\n");              
                             
      }
int main()
      {
          int no;
          printf("enter the size of array\n");
          scanf("%d",&no);
          int array[no];
          printf("enter the element\n");
          for(int i=0;i<no;i++)
               scanf("%d",&array[i]);
          majority(array,no);     
          return 0;
      }
