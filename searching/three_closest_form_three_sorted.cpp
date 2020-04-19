//Find three closest elements from given three sorted arrays

#include<bits/stdc++.h>
using namespace std;
void findCloset(int *a,int *b,int * c,int x,int y,int z)
       {
            int diff=INT_MAX;
            int i=0,j=0,k=0;
            int res_l,res_m,res_r;
            while(i<x and j<y and k<z)
                   {
                            int min_ele=min(a[i],min(b[j],c[k]));
                            int max_ele=max(a[i],max(b[j],c[k]));
                            
                            if(diff>abs(min_ele-max_ele))
                                    {
                                          res_l=i;
                                          res_m=j;
                                          res_r=k;
                                          diff=abs(max_ele-min_ele);
                                    }
                            if(max_ele-min_ele==0)
                                    break;       
                            else if(a[i]==min_ele)
                                    i++;
                            else if(b[j]==min_ele)
                                    j++;
                            else 
                                    k++;                        
                            
                   }
           printf("triplet:-%d\t%d\t%d\n",a[res_l],b[res_m],c[res_r]);        
                    
       }
int main()
      {
            int A[] = {1, 4, 10};
            int B[] = {2, 15, 20};
            int C[] = {10, 12};
         
            int p = sizeof A / sizeof A[0];
            int q = sizeof B / sizeof B[0];
            int r = sizeof C / sizeof C[0];
         
            findCloset(A, B, C, p, q, r);
            return 0;
           
      }
