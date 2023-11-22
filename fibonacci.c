#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a=0,b=1, c=a+b;
	printf("%d %d ",a,b);
	 for (i=3;i<=n;i++)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
}