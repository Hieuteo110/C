#include <stdio.h>
int main()
{
	int n,s=0;
	nhap:
		printf("Nhap so nguyen duong: ");
		scanf("%d",&n);
	if(n<0) goto nhap;
	for (int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			s+=i;
		}
	}
	if(n*2==s) printf("%d la so hoan thien");
	else printf("%d khong phai la so hoan thien");

return 0;
}

