//Find a pair with maximum product in array of Integers
#include<bits/stdc++.h>
using namespace std;
void MaxProduct(int *array,int no)
    {
          if(no<2)
               {
                    cout<<"No Pairs found\n";
                    return ;
               }
          if(no==2)
               {
                   cout<<"Pairs\t"<<array[0]<<"\t"<<array[1]<<endl;
                   return ;
               }
          int FirstMax=INT_MIN;
          int SecondMax=INT_MIN;
          int FirstMin=INT_MIN;
          int SecondMin=INT_MIN;
          for(int i=0;i<no;i++)
                  {
                         if(FirstMax<array[i])
                               {
                                  SecondMax=FirstMax;
                                  FirstMax=array[i];
                               }
                         else if(SecondMax<array[i])
                               SecondMax=array[i];
                         if(array[i]<0 and abs(array[i])>abs(FirstMin))
                              {
                                    SecondMin=FirstMin;
                                    FirstMin=array[i];
                              }      
                         else if(array[i]<0 and abs(array[i])>abs(SecondMin))
                               SecondMin=array[i];       
                                             
                  }
            
           if(SecondMax*FirstMax<FirstMin*SecondMin)
                 printf("Max product pair is {%d,%d}\n",FirstMin,SecondMin);
           else
                 printf("Max product pair is {%d,%d}\n",FirstMax,SecondMax) ;                              
    }
int main()
    {
       int no;
       printf("enter the size of array\n");
       scanf("%d",&no);
       int array[no];
       printf("enter the element\n");
       for(int i=0;i<no;i++)
             scanf("%d",&array[i]);
       MaxProduct(array,no);      
       return 0;
    }
