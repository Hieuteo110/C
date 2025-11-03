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
	for (i=0;i<n-1;i++)
		if (a[i]>a[i+1]) 
		{
			check=1;
			break;
		}
	if (check==1) printf("	Khong don dieu tang");
	else printf("    Don dieu tang");
return 0;
}

