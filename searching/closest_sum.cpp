#include<bits/stdc++.h>
//Given a sorted array and a number x, find the pair in array whose sum is closest to x
using namespace std;
void printclosenest(int *a,int no,int x )
      {
             int diff=INT_MAX;
             int l=0,res_l;
             int r=no-1,res_r;
             while(l<no and r>=0)
                   {
                        if(abs(a[l]+a[r]-x)<diff)
                              {
                                  res_l=l;
                                  res_r=r	;
                                  diff=abs(a[l]+a[r]-x); 
                              }
                        else if(a[l]+a[r]>x)
                              r--;
                        else
                             l++;              
                   }
            cout<<"closest pair\t"<<a[res_l]<<"\t"<<a[res_r]<<endl;       
      }
int main()
     {
          int no,i,k,x;
          printf("enter the total number do you want to insert in fist array\n");
          scanf("%d",&no);
          int a[no];
          printf("enter the element\n");
          for(i=0;i<no;i++)
                {
                  scanf("%d",&a[i]);
                }
           printf("enter the value of x\n");  
           scanf("%d",&x); 
           printclosenest(a,no,x);   
          return 0;
     }
