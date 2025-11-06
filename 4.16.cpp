#include <stdio.h>
#include <string.h>
int main ()
{
	char xau[30],n;
	int s=0;
	fflush(stdin);
	printf("Nhap vao xau: ");
	gets(xau);
	printf("Nhap vao ki tu n: ");
	scanf("%c",&n);
	for (int i=0;i<strlen(xau);i++)
		if(n==xau[i]) s++;
	printf("Co %d ki tu %c tai vi tri: ");
	for (int i=0;i<strlen(xau);i++)
		if(n==xau[i]) printf("%d ",i);
return 0;
}
