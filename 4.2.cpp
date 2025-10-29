#include <stdio.h>
int main()
{
	int n,s=0;
	nhap:
		printf("Nhap so nguyen duong: ");
		scanf("%d",&n);
	if(n<0) goto nhap;
	for (int i=1;i<=n;i++)
		if(n%i==0) s+=i;
	printf("Tong cac uoc cua %d: %d",n,s);
return 0;
}


