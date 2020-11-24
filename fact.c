#include<stdio.h>
void main()
{
int c,n,f=1;
printf("number");
scanf("%d",&n);
for(c=1;c<=n;c++)
{
    f=f*c;
    printf("factorpal %d",f);
}
}