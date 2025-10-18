#include <stdio.h>

int main()
{
	int n,s=0;
	printf("Nhap so nguyen duong n = ");
	scanf("%d",&n);
	while(n>0)
	{
		s*=10;
		s+=(n%10);
		n/=10;
	}
	printf("Nguoc lai: %d",s);
return 0;
}

