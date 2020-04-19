#include<bits/stdc++.h>
//Find the closest pair from two sorted arrays
using namespace std;
void printclosenest(int *a1,int *a2,int no1,int no2,int x )
      {
             int diff=INT_MAX;
             int l=0,res_l;
             int r=no2-1,res_r;
             while(l<no1 and r>=0)
                   {
                        if(abs(a1[l]+a2[r]-x)<diff)
                              {
                                  res_l=l;
                                  res_r=r	;
                                  diff=abs(a1[l]+a2[r]-x); 
                              }
                        else if(a1[l]+a2[r]>x)
                              r--;
                        else
                             l++;              
                   }
            cout<<"closest pair\t"<<a1[res_l]<<"\t"<<a2[res_r]<<endl;       
      }
int main()
     {
          int no1,no2,i,a,k,x;
          printf("enter the total number do you want to insert in fist array\n");
          scanf("%d",&no1);
          int  a1[no1];
          printf("enter the element\n");
          for(i=0;i<no1;i++)
                {
                  scanf("%d",&a1[i]);
                }
          printf("enter the total number do you want to insert in second array\n");
          scanf("%d",&no2);
          int a2[no2];
          printf("enter the element\n");
          for(i=0;i<no2;i++)
              scanf("%d",&a2[i]);  
           printf("enter the value of x\n");  
           scanf("%d",&x); 
           printclosenest(a1,a2,no1,no2,x);   
          return 0;
     }
