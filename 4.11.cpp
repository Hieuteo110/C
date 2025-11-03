#include <stdio.h>

int main()
{
	int n;
	nhap:
		printf("Nhap vao so nguyen duong n: ");
		scanf("%d",&n);
	if (n<=0) goto nhap;
	int a[n],i,check=0;
	printf("Nhap gia tri mang: ");
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<n/2;i++)
		if (a[i]!=a[n-i-1]) 
		{
			check=1;
			break;
		}
	if (check==1) printf("	Khong phai la mang doi xung");
	else printf("    La mang doi xung");
return 0;
}

