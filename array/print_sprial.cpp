//Print a given matrix in spiral form
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
         int dirr=0,t=0,b=row-1,l=0,r=col-1;
         
         while(t<=b and l<=r)
                {
                          if(dirr==0)
                                {
                                   for(int i=l;i<=r;i++)
                                        printf("%d\t",array[t][i]);
                                         
                                   t++;      
                                }
                          else if(dirr==1)
                                {
                                   for(int i=t;i<=b;i++)
                                        printf("%d\t",array[i][r]);
                                   r--;     
                                }      
                          else if(dirr==2)
                                {
                                   for(int i=r;i>=l;i--)
                                        printf("%d\t",array[b][i]);
                                   b--;     
                                }
                          else if(dirr==3)
                                {
                                    for(int i=b;i>=t;i--)
                                        printf("%d\t",array[i][l]);
                                    l++;      
                                }       
                          dirr=(dirr+1)%4;      
                                     
                } 
         printf("\n");            
         return 0;  
     }
