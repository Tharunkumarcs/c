#include<stdio.h>
#include<conio.h>
void main()
[
int n,i,j,flag;
printf("\n enter the value");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
flag=0;
for(j=2;j*j<=i;j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag!=1)
printf("\n%d",i);
}
getch();
}
