//Turn an image by 90 degree
#include<bits/stdc++.h>
using namespace std;
int main()
     {
          int r,c;
          printf("enter the row and column\n");
          scanf("%d%d",&r,&c);
          printf("enter the array element\n");
          int array[r][c];
          for(int i=0;i<r;i++)
                {
                     for(int j=0;j<c;j++)
                           scanf("%d",&array[i][j]);
                }
          int temp[c][r];      
          for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                          temp[j][i]=array[i][j];
                }         
           
           
          printf("input matrix:-\t");
          for(int i=0;i<r;i++)
                 {
                       for(int j=0;j<c;j++)
                            printf("\t\t%d",array[i][j]);
                       printf("\n");       
                 } 
          printf("rotated matrix:-\t");       
          for(int i=0;i<c;i++)
                {
                      for(int j=0;j<r;j++)
                         printf("\t\t%d",temp[i][j]); 
                  printf("\n"); 
                }                
          return 0;
     }
