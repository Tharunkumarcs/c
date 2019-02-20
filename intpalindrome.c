#include<stdio.h>
#include<conio.h>
int main()
{
int a,b=0,n,rem;
scanf("%d",&n);
a=n;
while(n!=0)
{
	rem=n%10;
	b=b*10+rem;
	n=n/10;
}
if(a==b)
printf("\nPalindrome");
else
printf("\nNot Palindrome");
	return 0;
} 
