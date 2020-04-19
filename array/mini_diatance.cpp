//Find the minimum distance between two numbers

#include<bits/stdc++.h>
using namespace std;
int min_distance(int *array,int no,int x,int y)
      {
              int pre,i;
              int min_dis=INT_MAX;
              for( i=0;i<no;i++)
                    {
                          if(array[i]==x or array[i]==y)
                                  {
                                        pre=i;
                                        break;
                                  }
                    }
                    
              for(;i<no;i++)
                   {
                          if(array[i]==x or array[i]==y)
                                 {
                                        if(array[pre]!=array[i] and (i-pre)<min_dis)
                                                  {
                                                         min_dis=(i-pre);
                                                         pre=i;
                                                  }  
                                        else
                                                        pre=i;                  
                                 }
                   }
               
             return min_dis;            
      }
int main()
      {
           int no,x,y;
           printf("enter the size of array\n");
           scanf("%d",&no);
           int array[no];
           printf("enter the element\n");
           for(int i=0;i<no;i++)
                scanf("%d",&array[i]);
           printf("enter the two element\n");
           scanf("%d%d",&x,&y);     
           int ans=min_distance(array,no,x,y);   
           printf("minimum distance:-\t%d\n",ans); 
           return 0;
      }
