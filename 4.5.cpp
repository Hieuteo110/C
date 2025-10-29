#include <stdio.h>

int main()
{
	int n;
	nhaplai:
		printf("Nhap so nguyen duong n: ");
		scanf("%d",&n);
	if (n<=0) goto nhaplai;
	int a[n];
	a[0]=1;
	a[1]=1;
	for (int i=2;i<n;i++)
		a[i]=a[i-2]+a[i-1];
	printf("So fibonaxi thu %d = %d",n,a[n-1]);
return 0;
}
