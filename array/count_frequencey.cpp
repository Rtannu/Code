//Count frequencies of all elements in array in O(1) extra space and O(n) time
#include<bits/stdc++.h>
using namespace std;
void find_frequency(int *array,int no)
       {
               for(int i=0;i<no;i++)
                    array[i]=array[i]-1;
               for(int i=0;i<no;i++)
                     {
                            array[array[i]%no]=array[array[i]%no]+no;
                                                        
                     }
              for(int i=0;i<no;i++)
                    cout<<(i+1)<<" -> "<<array[i]/no<<endl;               
       }
int main()
       {
              int no;
              printf("enter the size of array\n");
              scanf("%d",&no);
              int array[no];
              printf("enter  the number\n");
              for(int i=0;i<no;i++)
                     scanf("%d",&array[i]);
              find_frequency(array,no);       
              return 0;
       }
