//Median of two sorted arrays
#include<bits/stdc++.h>
using namespace std;
int median(int * a,int * b,int no)
       {
           int i=0;
           int j=0;
           int count=0;
           int m1=-1,m2=-1;
           for(count=0;count<=no;count++)
                  {
                         if(i==no)
                               {
                                    m1=m2;
                                    m2=b[0]; 
                                    break;
                               }
                         else if(j==no)
                               {
                                    m1=m2;
                                    m2=a[0]; 
                                    break; 
                               }     
                         else if(a[i]<b[j])
                               {
                                  m1=m2;
                                  m2=a[i];
                                  i++;
                               }
                          else
                               {
                                  m1=m2;
                                  m2=b[j];
                                  j++;
                               }                                    
                  }
                  
                  return (m1+m2)/2;
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
