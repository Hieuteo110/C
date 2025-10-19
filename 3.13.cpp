#include <stdio.h>

int main()
{
	int n,n1,s=0;
	printf("Nhap so n = ");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		s=s*10+(n%10);
		n/=10;
	}
	if (n1==s) printf("%d la so doi xung",n1);
	else printf("%d khong phai so doi xung",n1);
return 0;
}

