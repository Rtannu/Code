//Find common elements in three sorted arrays
#include<bits/stdc++.h>
using namespace std;
void findcommon(int *a,int *b,int *c,int x,int y,int z)
                {
                      printf("common element:-\t");
                      int i=0,j=0,k=0;
                      while(i<x and j<y and k<z)
                            {
                                   if(a[i]==b[j] and b[j]==c[k])
                                          {
                                             printf("%d\n",a[i]);
                                             i++,j++,k++;  
                                          }
                                    else if(a[i]<b[j])
                                          i++;
                                    else if(b[j]<c[k])
                                          j++;
                                    else
                                          k++;                        
                            }
                }
int main()
   {
        int no1,no2,no3;
        printf("enter the size of first array\n");
        scanf("%d",&no1);
        int array1[no1];
        printf("enter the element\n");
        for(int i=0;i<no1;i++)
               scanf("%d",&array1[i]);
        printf("enter the size of second array\n");
        scanf("%d",&no2);
        int array2[no2];
        printf("enter the element\n");
        for(int i=0;i<no2;i++)
              scanf("%d",&array2[i]);
        printf("enter the size of third array\n");
        scanf("%d",&no3);
        int array3[no3];
        printf("enter the element\n");
        for(int i=0;i<no3;i++)
             scanf("%d",&array3[i]);
        findcommon(array1,array2,array3,no1,no2,no3);                   
        return 0;
   }
