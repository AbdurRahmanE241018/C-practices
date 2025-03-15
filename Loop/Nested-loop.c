#include<stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=3;i++)
   {
       printf("Outer loop start\n");
       for(j=1;j<=4;j++)
       {
           printf("Hiiiii\n");
       }
       printf("Outer loop end\n");
   }
}
