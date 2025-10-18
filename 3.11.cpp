#include <stdio.h>

int main()
{
	int n,s;
	for(int i=1;i<=1000;i++)
	{	
		n=i;
		s=0;
		while(n>0)
		{
		s=s+(n%10)*(n%10)*(n%10);
		n/=10;
		}
	if (s==i) printf("%d ",i);
	}
return 0;
}

