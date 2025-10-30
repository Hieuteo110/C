#include <stdio.h>
int main ()
{
	int n,i,check=0;
	nhap:
		printf("Nhap so nguyen duong n: ");
		scanf("%d",&n);
	if (n<=0) goto nhap;
	float a[n],x;
	printf("Nhap gia tri mang a: ");
	for (i=0;i<n;i++)
		scanf("%f",&a[i]);
	printf("Nhap so x = ");
	scanf("%f",&x);
	for (i=0;i<n;i++)
		if (x==a[i]) check++;
	if (check==0) printf("%.2f khong co mat trong mang",x);
	else 
	{
		printf("%.2f co mat trong mang\n",x);
		printf("Tai cac vi tri: ");
		for (i=0;i<n;i++)
			if(x==a[i]) printf("%d ",i+1);
	}
return 0;
}
