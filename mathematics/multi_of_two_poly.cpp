//Multiply two polynomials
#include<bits/stdc++.h>
using namespace std;
void print(int * array,int no)
       {
            for(int i=0;i<no;i++)
                    {
                       cout<<array[i];
                       if(i!=0)
                             cout<<"x^"<<i;
                       if(i!=no-1)
                             cout<<"+";       
                    }
            printf("\n");        
       }
void mul_of_poly(int *a1,int no1,int *a2,int no2)
       {
            int *array3=new int[no1+no2-1];
            for(int i=0;i<no1+no2-1;i++)
                array3[i]=0;
          
            for(int i=0;i<no1;i++)
                    {
                        for(int j=0;j<no2;j++)
                               array3[i+j]+=(a1[i]*a2[j]);
                    } 
             print(array3,no1+no2-1);              
       }
       
int main()
      {
            
            int no1,no2;
            printf("enter the size of  first array\n");
            scanf("%d",&no1);
            int array1[no1];
            printf("enter the array element\n");
            for(int i=0;i<no1;i++)
                    scanf("%d",&array1[i]);
            printf("enter the size of second array\n");
            scanf("%d",&no2);
            int array2[no2];
            printf("enter the array element\n");
            for(int i=0;i<no2;i++)
                    scanf("%d", &array2[i]);
            print(array1,no1);
            print(array2,no2);        
            mul_of_poly(array1,no1,array2,no2);
            return 0;
      }
