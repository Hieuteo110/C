#include <stdio.h>
#include <string.h>
int main ()
{
	int n,i=0;
	nhap:
		printf("Nhap vao so nguyen n: ");
		scanf("%d",&n);
	if(n<0) goto nhap;
	char a[100];
	if (n==0) a[i++]='0';
	else
	{
		while(n>0)
		{
			a[i]=(n%10)+'0';
			n/=10;
			i++;
		}
	}
	a[i]='\0';
	for (i=strlen(a);i>=0;i--)
		printf("%c",a[i]);
return 0;
}

