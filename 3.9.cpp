#include <stdio.h>
int main ()
{
	int n;
	float s=0,dau;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	while (0>n||n>1000){
		printf("Moi nhap lai so nguyen n: ");
		scanf("%d",&n);
	}
	for(int i=1; i<=n;i++)
		{
		dau=(i%2==0)?-1:1;
		dau=dau*((float)1/i);
		s=s+dau;
		}
	printf("Tong s = %.3f",s);
return 0;
}

