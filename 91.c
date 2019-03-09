#include <stdio.h>
#include<conio.h>
int main()
{
  long N,r,base=1,bin=0;
   scanf("%d",&N);
   
   while(N)
   {
       
       r=N%2;
       N=N/2;
       bin=bin+(r*base);
      base=base*10;
      
   }
   printf("%ld",bin);
    return 0;
}
