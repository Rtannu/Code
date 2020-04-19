//Find all triplets with zero sum
#include<bits/stdc++.h>
using namespace std;
void triplet(int *array,int no)
    {
         bool flag=false;
         for(int i=0;i<no-2;i++)
                {
                     for(int j=i+1;j<no-1;j++)
                           {
                               for(int k=j+1;j<no;j++)
                                   {
                                       if(array[i]+array[j]+array[k]==0)
                                          {
                                             cout<<array[i]<<"\t"<<array[j]<<"\t"<<array[k]<<endl; 
                                             flag=true;        
                                          }
                                   }       
                           }
                }
                
          if(flag==false)
                printf("triplet is not exit\n");          
    }
int main()
    {
        int no;
        printf("enter the size of array\n");
        scanf("%d",&no);
        int array[no];
        printf("enter the array element\n");
        for(int i=0;i<no;i++)
                 scanf("%d",&array[i]);
        triplet(array,no);         
        return 0;
    }
