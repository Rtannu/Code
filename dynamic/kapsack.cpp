//0-1 Knapsack Problem
#include<bits/stdc++.h>
using namespace std;
int knapsack(int *wt,int *val,int no,int capacity)
      {
              int dynmat[no+1][capacity+1];
            //  for(int i=0;i<no;i++)
             //       cout<<wt[i]<<"\t"<<val[i]<<"\t"<<endl;
              for(int cap=0;cap<=no;cap++)
                      {
                           for(int wgt=0;wgt<=capacity;wgt++)
                                     {
                                              if(cap==0 or wgt==0)
                                                   {
                                                    // cout<<"raj"<<endl;
                                                     dynmat[cap][wgt]=0;
                                                   }  
                                              else if(wt[cap-1]<=wgt)
                                                   {
                                                   // cout<<"mnit"<<endl;
                                                    dynmat[cap][wgt]=max(dynmat[cap-1][wgt],val[cap-1]+dynmat[cap-1][wgt-wt[cap-1]]);
                                                    }
                                              else
                                                   {
                                                   //  cout<<"jaipur"<<endl;
                                                     dynmat[cap][wgt]=dynmat[cap-1][wgt];  
                                                   }         
                                     }
                      }
           // for(int i=0;i<=no;i++)
           //         {
           //                for(int j=0;j<=capacity;j++)
           //                         cout<<dynmat[i][j]<<"\t";
           //                cout<<endl;         
           //         }           
            return dynmat[no][capacity];          
      }
int  main()
      {
             int no,capacity;
             printf("enter the total number of value\n");
             scanf("%d",&no);
             int val[no],wt[no];
             printf("enter the weight\n");
             for(int i=0;i<no;i++)
                    scanf("%d",&wt[i]);
             printf("enter the value of weight\n");       
             for(int i=0;i<no;i++)
                    scanf("%d",&val[i]);
             printf("enter the capacity\n");
             scanf("%d",&capacity);       
             int ans=knapsack(wt,val,no,capacity);       
             cout<<"MAX PROFIT:-\t"<<ans<<endl;
             return 0;
      }
