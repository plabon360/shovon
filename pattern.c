#include<stdio.h>
int main()
{
     int i,j;
     for(i=1;i<=6;i++)
     {

          for(j=1;j<=i;j++)
               printf("%c",'a');
          for(j=2;j<=i;j++)
               printf("%c",'b');
          for(j=3;j<=i;j++)
               printf("*");
          for(j=1;j<=i;j=i+2)
              printf("%c",63+i*3-1);
              printf("\n");
     }
     return 0;
}
