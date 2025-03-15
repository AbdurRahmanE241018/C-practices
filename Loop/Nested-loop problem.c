
#include<stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=10;i++)
   {
       for(j=1;j<=i;j++)
       {
           printf("*");
       }
       printf("\n");
   }

   for(i=1;i<=10;i++)
   {
       for(j=i;j<=10;j++)
       {
           printf("*");
       }
       printf("\n");
   }
   return 0;
}

