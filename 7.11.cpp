#include <stdio.h>
void doc ()
{
	FILE *f;
	char ch;
	f=fopen("output11.txt","r");
    while ((ch = fgetc(f)) != EOF)
    	printf("%c",ch);
    fclose(f);  
}
void nhapmang(int a[],int *n)
{
	FILE *f;
	int i=0;
	f=fopen("input11.txt","r");
    while (i < 100 && fscanf(f, "%d", &a[i]) == 1)
        i++;
	*n=i;
	fclose(f);
}
//===================================
void xemmang(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
}
//===================================
void soam(int a[],int n)
{
	FILE *f;
	int i,dem=0;
	for (i=0;i<n;i++)
		if (a[i]<0) dem++;
	f=fopen("output11.txt","w");
	fprintf(f,"So phan tu am: %d\n",dem);
	fclose(f);
}
int main()
{
	int a[100],n;
	nhapmang(a,&n);
	printf("\nMang duoc nhap vao: \n");
	xemmang(a,n);
	soam(a,n);
	printf("\n\n");
	doc();
}
