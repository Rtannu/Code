//magic number
#include<bits/stdc++.h>
using namespace std;
void magic(int no)
        {
             
              int magic_store[no][no];
              memset(magic_store,0,sizeof(magic_store));
              int i=no/2;
              int j=no-1;
              int k;
             
              for(k=1;k<=no*no;)
                      {
                          if(i==-1 and j==no)
                                   {
                                          i=0;
                                          j=no-2;
                                   }
                           else
                                  {
                                         if(i<0)
                                              i=no-1;
                                         if(j==no)
                                              j=0;     
                                              
                                  }
                          if(magic_store[i][j])
                                 {
                                         i++;
                                         j-=2;
                                         continue;
                                 }         
                          else
                                 {
                                        magic_store[i][j]=k++; 
                                 }       
                           i--;
                           j++;       
                      }
               for(i=0;i<no;i++)
                     {
                          for(j=0;j<no;j++)
                                 printf("%d\t",magic_store[i][j]);
                          printf("\n");         
                     }        
        }
int main()
     {
           int no;
           printf("enter only odd number\n");
           scanf("%d",&no);
           magic(no); 
           return 0;
     }
