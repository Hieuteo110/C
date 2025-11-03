#include <stdio.h>

int main()
{
	int n;
	nhap:
		printf("Nhap vao so nguyen duong n: ");
		scanf("%d",&n);
	if (n<=0) goto nhap;
	int a[100],i,x,j,k;
	printf("Nhap gia tri mang: ");
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
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
	printf("mang A: ");
	for (i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\nNhap vao so nguyen x: ");
	scanf("%d",&x);
	if (x>=a[n-1]) a[n]=x;
	else 
	{
	    for (i=0;i<n;i++) 
	        if (x<a[i]) 
			{
	            k=i;
	            break;
	        }
	    for (i=n;i>k;i--)
        	a[i]=a[i-1];
    	a[k]=x;
	}
    n++;
	printf("mang A: ");
	for (i=0;i<n;i++)
		printf("%d ",a[i]);
return 0;
}

