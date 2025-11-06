#include <stdio.h>
#include <string.h>
int main ()
{
	char a[100];
	fflush(stdin);
	printf("Nhap vao xau: ");
	gets(a);
	int i,s=0;
	for( i=0;i<strlen(a);i++)
		if(a[i]==' ') s++;
	printf("So tieng trong xau: %d",s+1);
return 0;
}

