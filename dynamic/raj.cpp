#include<bits/stdc++.h>
using namespace std;
bool subset_sum(int * array,int no,int sum)
        {
               bool dynstore[no+1][sum+1];
               for(int i=0;i<=no;i++)
                      {
                         for(int j=0;j<=sum;j++)
                                 {
                                       if(i==0)
                                            dynstore[0][j]=false;
                                       else if(j==0)
                                            dynstore[i][0]=true;      
                                       else if(j>=array[i-1])
                                            dynstore[i][j]=dynstore[i][j] or dynstore[i-1][j-array[i-1]];
                                       else
                                            dynstore[i][j]=dynstore[i-1][j];            
                                 }    
                      }
               
               for(int i=0;i<=no;i++)
                      {
                            for(int j=0;j<=sum;j++)
                                 cout<<dynstore[i][j]<<"\t";
                            cout<<endl;      
                      }        
        }
int main()
        {
            int no,sum;
            printf("enter the size of set\n");
            scanf("%d",&no);
            printf("enter the element\n");
            int array[no];
            for(int i=0;i<no;i++)
                   scanf("%d",&array[i]);
            printf("enter  the sum\n");
            scanf("%d",&sum);       
            subset_sum(array,no,sum);       
            return 0;
        }

