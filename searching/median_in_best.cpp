//Median of two sorted arrays
#include<bits/stdc++.h>
using namespace std;
int find_median(int *array,int no)
       {
               if(no%2==0)                   
                    return (array[no/2]+array[no/2-1])/2;                   
                else
                    return (array[no/2]);   
                     
       }
int median(int * a,int * b,int no)
       {
             if(no<0)
                 return -1;
              if(no==1)
                  {
                       return (a[0]+b[0])/2;
                  }        
               if(no==2)
                       return (max(a[0],b[0])+min(a[1],b[1]))/2;
                int m1=find_median(a,no);  
                int m2=find_median(b,no);
                if(m1<m2)
                       {
                             if(no%2==0)                                  
                                   return median(a+no/2-1,b,no-no/2+1);
                             else
                                      return median(a+no/2,b,no-no/2);
                                          
                       }
                 else
                       {
                              if(no%2==0)
                                     return median(b+no/2-1,a,no-no/2+1);
                              else
                                     return median(b+no/2,a,no-no/2);        
                       }                
       }
int main()
      {
           int no1,no2;
           printf("enter ths size of first array\n");
           scanf("%d",&no1);
           printf("enter the size of second array\n");
           scanf("%d",&no2);
           int array1[no1];
           int array2[no2];
           printf("enter the element for first array\n");
           for(int i=0;i<no1;i++)
                  scanf("%d",&array1[i]);
           printf("enter the element for second array\n");
           for(int i=0;i<no2;i++)
                  scanf("%d",&array2[i]);
           cout<<"median="<<median(array1,array2,no1)<<endl;              
      }
