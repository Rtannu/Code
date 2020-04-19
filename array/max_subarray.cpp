//Maximum size square sub-matrix with all 1s
#include<bits/stdc++.h>
using namespace std;
int main()
     {
         int row,col;
         printf("enter the row and column\n");
         scanf("%d%d",&row,&col);
         int array[row][col];
         printf("enter the element\n");
         for(int i=0;i<row;i++)
                {
                   for(int j=0;j<col;j++)
                          scanf("%d",&array[i][j]); 
                }
         int dyn[row+1][col+1];
         int max=INT_MIN;
         for(int i=0;i<=row;i++)
                {
                    for(int j=0;j<=col;j++)
                          {
                                if(i==0 or j==0)
                                    dyn[i][j]=0;
                                else if(array[i-1][j-1]==0)
                                    dyn[i][j]=0;
                                else if(array[i-1][j-1]==1)
                                    dyn[i][j]=min(dyn[i-1][j],min(dyn[i][j-1],dyn[i-1][j-1]))+1;  
                                if(dyn[i][j]>max)
                                       max=dyn[i][j];                 
                          }
                }
                
                
           
                
         printf("max subarray:-\t%d\n",max);       
         printf("\n");            
         return 0;  
     }
