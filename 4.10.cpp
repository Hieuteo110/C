#include <stdio.h>

int main()
{
	int n,i,j;
	nhap:
		printf("Nhap vao so nguyen duong n: ");
		scanf("%d",&n);
	if (n<=0) goto nhap;
	float a[n],x;
	printf("Nhap gia tri mang: ");
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
	//Tang dan
	for (i=1;i<n;i++)
	{
		x=a[i];
		j=i-1;
		while(j>=0&&a[j]>x)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
	printf("Sap xep tang dan: ");
	for(i=0;i<n;i++)
		printf("%g ",a[i]);
	//Giam dan
	for (i=1;i<n;i++)
	{
		x=a[i];
		j=i-1;
		while(j>=0&&a[j]<x)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
	printf("\nSap xep giam dan: ");
	for(i=0;i<n;i++)
		printf("%g ",a[i]);
return 0;
}

