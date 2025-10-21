#include <stdio.h>

int main()
{	
	long long n,k,s,gt1=1,gt2=1,gt3=1,i;
	nhaplai: 
		printf("Nhap k = ");scanf("%lld",&k);
		printf("Nhap n = ");scanf("%lld",&n);
	if (k<=0||k>n) goto nhaplai;
	for(i=1;i<=n;i++)
		gt1*=i;
	for(i=1;i<=k;i++)
		gt2*=i;
	for(i=1;i<=(n-k);i++)
		gt3*=i;
	s=gt1/(gt2*gt3);
	printf("To hop chap %lld cua %lld = %lld",k,n,s);

return 0;
}

