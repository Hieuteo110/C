#include <stdio.h>

int main()
{
	int n;
	nhap:
		printf("Nhap vao so nguyen duong n: ");
		scanf("%d",&n);
	if (n<=0) goto nhap;
	int a[n],i,check,j,k=0,b[n];
	printf("Mang A: ");
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{	
		check=0;
		for (j=0;j<k;j++)
			if (a[i]==b[j])
			{
				check=1;
				break;
			}	
		if (check==0)
		{
			b[k]=a[i];
			k++;
		}
	}
	printf("Mang B: ");
    for (i=0;i<k;i++)
        printf("%d ",b[i]);
return 0;
}

