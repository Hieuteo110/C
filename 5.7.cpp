#include <stdio.h>
int fibo(int n)
{
	int a[n];
	a[0]=1;
	a[1]=1;
	for (int i=2;i<n;i++)
		a[i]=a[i-2]+a[i-1];
	return a[n-1];
}
int main ()
{	
	int n;
	nhaplai:
		printf("Nhap so n: ");scanf("%d",&n);
	if (n<0) goto nhaplai;
	printf("So Fibonaxi thu %d: %d",n,fibo(n));
return 0;
}

