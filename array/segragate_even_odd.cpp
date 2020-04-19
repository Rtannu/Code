//Segregate Even and Odd numbers
#include<bits/stdc++.h>
using namespace std;
void segregate(int *array,int no)
      {
            int i=0;
            int j=no-1;
            while(i<=j)
                 {
                       if(array[i]%2==0)
                              {
                                 i++;
                              }
                       else 
                              {
                                   swap(array[i],array[j]);
                                   j--; 
                              }        
                 }
                 
            for(int i=0;i<no;i++)
                  printf("%d\t",array[i]);   
            printf("\n");        
      }
int main()
      {
            int no;
            printf("enter the size of array\n");
            scanf("%d",&no);
            printf("enter the element\n");
            int array[no];
            for(int i=0;i<no;i++)
                   scanf("%d",&array[i]);
            segregate(array,no);       
            return 0;
      }
