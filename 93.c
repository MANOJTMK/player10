#include <stdio.h>
#include<conio.h>
int main()
{
int N,i,c;
scanf("%d",&N);
int a[N];
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}


for(i=0;i<N-1;i=i+2)
{
    
    c=a[i];
    a[i]=a[i+1];
    a[i+1]=c;
    

}

for(i=0;i<N;i++)
{
    printf("%d ",a[i]);
}

    return 0;
}
