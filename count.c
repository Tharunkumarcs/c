#include<stdio.h>
#include<conio.h>
int main()
{
	int c=0,n;
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		c++;
	}
	printf("%d",c);
return 0;
}
	
