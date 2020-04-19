//Print a given matrix in spiral form
#include<bits/stdc++.h>
using namespace std;
int main()
     {
         int row,col;
         printf("enter the row and column\n");
         scanf("%d%d",&row,&col);
         char array[row][col];
         
         int dirr=0,t=0,b=row-1,l=0,r=col-1;
         char x='X';
         while(t<=b and l<=r)
                {
                          if(dirr==0)
                                {
                                   for(int i=l;i<=r;i++)
                                     array[t][i]=x;
                                         
                                   t++;      
                                }
                          else if(dirr==1)
                                {
                                   for(int i=t;i<=b;i++)
                                       array[i][r]=x;
                                   r--;     
                                }      
                          else if(dirr==2)
                                {
                                   for(int i=r;i>=l;i--)
                                        array[b][i]=x;
                                   b--;     
                                }
                          else if(dirr==3)
                                {
                                    for(int i=b;i>=t;i--)
                                       array[i][l]=x;
                                    l++;      
                                }       
                          dirr=(dirr+1)%4;  
                         x = (x == '0')? 'X': '0';
                                     
                }
         for(int i=0;i<row;i++)
                {
                     for(int j=0;j<col;j++)
                           printf("%c\t",array[i][j]);
                     printf("\n");                  
                }
                       
         printf("\n");            
         return 0;  
     }
