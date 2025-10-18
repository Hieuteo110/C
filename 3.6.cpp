#include <stdio.h>
int main ()
{
	int n,i=1,s=0,s1;
	printf("nhap vao so nguyen n = ");
	scanf("%d",&n);
	while (i<=n)
	{
		s1=1;
		for(int j=1;j<=i;j++)
			s1=s1*j;
		s=s+s1;
		i++;
	}
printf("tong s = %d",s);
return 0;
}

