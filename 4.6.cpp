#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *a,n,s=0,*b;
	nhaplai:
		printf("Nhap so nguyen duong n: ");
		scanf("%d",&n);
	if (n<=0) goto nhaplai;
	a=(int*)malloc(n*sizeof(int));
	b=a;
	printf("Nhap gia tri cua %d o: ",n);
	for (int i=0;i<n;i++)
	{	
		scanf("%d",a);
		s+=*a;
		a++;
	}
	printf("Tong la: %5d\n",s);
	printf("trung binh cong la: %.1f",float(s)/n);
	free(b);
return 0;
}
