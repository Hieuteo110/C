#include <stdio.h>
int main ()
{
	int n,s=0;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	while (1>n||n>100){
		printf("Moi nhap lai so nguyen n: ");
		scanf("%d",&n);
	}
	for(;n<=100;n++)
		s=s+n;
	printf("Tong s = %d",s);
return 0;
}

