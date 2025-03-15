#include<stdio.h>
int main()
{
   int i;
   for(i=1;i<=5;i++)
   {
       printf("Facebook\n\t");
       if(i==3)
       //  break;
       continue;
       printf("Instagram\n\t\t");
       printf("Twitter\n");
   }
   printf("Tiktok\n");
   return 0;
}
