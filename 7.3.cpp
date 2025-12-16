#include <stdio.h>
void doc ()
{
	FILE *f;
	char ch;
	f=fopen("output3.txt","r");
    while ((ch = fgetc(f)) != EOF)
    	printf("%c",ch);
    fclose(f);  
}
void nhapmang(int a[],int *n)
{
	FILE *f;
	int i=0;
	f=fopen("input3.txt","r");
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
void sapxep(int a[],int n)
{
	FILE *f
	int i,j;
	int tg;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if (a[i]>a[j])
			{
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
	fclose(f);
}
//======================================
void ghivaotep(int a[], int n)
{
	FILE *g;
	int i;
	g=fopen("output3.txt","wt");
	for(i=0;i<n;i++)
		fprintf(g,"%5d",a[i]);
	fclose(g);
}
//======================================
int main()
{
	int a[100],n;
	nhapmang(a,&n);
	printf("\nMang truoc khi sap xep la: \n");
	xemmang(a,n);
	sapxep(a,n);
	printf("\nMang sau khi sap xep la: \n");
	xemmang(a,n);
	ghivaotep(a,n); 
}
