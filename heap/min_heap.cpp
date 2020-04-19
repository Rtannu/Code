#include<bits/stdc++.h>
using namespace std;
#define cap 100
int size=0;
int arr[cap];
int parent(int i)
    {
       return (i-1)/2;
    }
int left(int i)
    {
      return (2*i+1);
    }
int right(int i)
    {
      return (2*i+2);
    }
void insert(int data)
   {
     if(size==cap)
         return;
     size++;
     int i=size-1;
     arr[i]=data;
     while(i!=0 and arr[parent(i)]>arr[i])
          {
             swap(arr[parent(i)],arr[i]);
             i=parent(i);
          }
   }
int min_element(void)
   {
     return arr[0];
   }
void heapfy(int i)
   {
      int l=left(i);
      int r=right(i);
      int smaller=i;
      if(l<size and arr[i]>arr[l])
          smaller=l;
      if(r<size and arr[r]<arr[smaller])
          smaller=r;
      if(smaller!=i)
         {
            swap(arr[i],arr[smaller]);
            heapfy(smaller);
         }
   }
int extract_min()
   {
     if(size<=0)
        return INT_MAX;
     else if(size==1)
        {
          size--;
          return arr[0];          
        }
     int root=arr[0];
     arr[0]=arr[size-1];
     size--;
     heapfy(0);
     return root;
   }
void decrease(int index,int value)
    {
       arr[index]=value;
       while(index!=0 and arr[parent(index)]>arr[index])
             {
               swap(arr[parent(index)],arr[index]);
               index=parent(index);
             }
    }
void deletion(int index)
    {
         decrease(index,INT_MIN);
         extract_min();
    }
void print()
    {
        for(int i=0;i<size;i++)
         cout<<arr[i]<<"\t";
        printf("\n");
    }
int main()
   {
      int no;
      printf("enter the total number do you want to insert in binary heap\n");
      scanf("%d",&no);
      for(int i=0;i<no;i++)
          {
             int input;
             cin>>input;
             insert(input);
          }
      printf("element of heap:-\t");
      print();
      printf("min element in binary heap:-\t");
      cout<<min_element()<<endl;
      printf("extraction of minimum\n");
      cout<<extract_min()<<endl;
      printf("element of heap:-\t");
      print();
      printf("enter the index for deletion\n");
      scanf("%d",&no);
      deletion(no);
      printf("heap element after deletion :-\t");
      print();
   }
