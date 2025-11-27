#include <stdio.h>
long long tohop(int k,int n)
{
	long long gt1=1,gt2=1,gt3=1,i,s;
	for(i=1;i<=n;i++)
		gt1*=i;
	for(i=1;i<=k;i++)
		gt2*=i;
	for(i=1;i<=(n-k);i++)
		gt3*=i;
	s=gt1/(gt2*gt3);
	return s;
}
int main ()
{	
	int n,k;
	nhaplai: 
		printf("Nhap k = ");scanf("%d",&k);
		printf("Nhap n = ");scanf("%d",&n);
	if (k<=0||k>n) goto nhaplai;
	printf("To hop chap %d cua %d la: %lld",k,n,tohop(k,n));
return 0;
}

