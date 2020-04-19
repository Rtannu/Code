//Program for Tower of Hanoi
#include<bits/stdc++.h>
using namespace std;
void move_one_disk(char source,char destination)
           {
                 printf("move one disk from %c to %c\n",source,destination);
           }
void tower_of_hanoi(int no,char source,char tempory,char destination)
           {
                     if(no==1)
                         {
                                move_one_disk(source,destination);
                                return ;
                         }
                     else
                         {
                                tower_of_hanoi(no-1,source,destination,tempory);
                                move_one_disk(source,destination);
                                tower_of_hanoi(no-1,tempory,source,destination);
                         }    
                         
           }
int main()
     {
           int no;
           printf("enter the size of tower\n");
           scanf("%d",&no);
           tower_of_hanoi(no,'A','B','C');
           return 0;
     }
