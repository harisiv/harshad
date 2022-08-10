#include<stdio.h>
int main()
{
	int r,s=0,n,n1;
	printf("enter n value");
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		n=n/10;		
	}
	if(n1%s==0)
	printf("harshad");
	else
	printf("not harshad");
}
