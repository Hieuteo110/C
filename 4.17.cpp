#include <stdio.h>
#include <string.h>
int main ()
{
	char a[30];
	fflush(stdin);
	printf("Nhap vao xau: ");
	gets(a);
	int check=0,n=strlen(a);
	for (int i=0;i<n/2;i++)
		if (a[i]!=a[n-i-1]) 
		{
			check=1;
			break;
		}
	if (check==1) printf("	Khong phai la xau doi xung");
	else printf("    La xau doi xung");
return 0;
}

