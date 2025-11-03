#include <stdio.h>
int main ()
{
	int n,i;
	float min=0,max=0;
	nhap:
		printf("Nhap so nguyen duong n: ");
		scanf("%d",&n);
	if (n<=0) goto nhap;
	float a[n],x;
	printf("Nhap gia tri mang a: ");
	for (i=0;i<n;i++)
		scanf("%f",&a[i]);
	max=a[0];min=a[0];
	for (i=0;i<n;i++)
	{
		if (a[i]>=max) max=a[i];
		else if (a[i]<min) min=a[i];
	}
	printf("Gia tri lon nhat la %.2f, ",max);
	printf("tai cac vi tri: ");
	for (i=0;i<n;i++)
		if(max==a[i]) printf("%d ",i+1);
	printf("\n");
	printf("Gia tri be nhat la %.2f, ",min);
	printf("tai cac vi tri: ");
	for (i=0;i<n;i++)
		if(min==a[i]) printf("%d ",i+1);
return 0;
}
