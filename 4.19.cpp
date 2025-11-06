#include <stdio.h>
#include <string.h>
int main ()
{
	char a[30];
	fflush(stdin);
	printf("Nhap vao ten: ");
	gets(a);
	int n=strlen(a),j,i;
	for (i=0;i<n;i++)
		if (a[i]==' ') 
		{
			j=i;
			break;	
		}
	printf("Ho cua nguoi do: ");
	for (i=0;i<j;i++)
		printf("%c",a[i]);
return 0;
}

