#include <stdio.h>
void nhapmang(int a[],int *n)
{
	FILE *f;
	int i=0;
	f=fopen("input.txt","rt");
	while (feof(f)==0)
	{
		fscanf(f,"%d",&a[i]);
		if (feof(f)==0)
			i++;
	}
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
	int i,j;
	int tg;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if (a[i]>a[j])
			{
				tg=a[i];a[i]=a[j];a[j]=tg;
			}
}
//======================================
void ghivaotep(int a[], int n)
{
	FILE *g;
	int i;
	g=fopen("output.txt","wt");
	for(i=0;i<n;i++)
		fprintf(g,"%5d",a[i]);
	fclose(g);
}
//======================================
int main()
{
	int a[100],n;
	nhapmang(a,&n);//Doc cac phan tu mang tu tep input.txt
	printf("\nMang truoc khi sap xep la: \n");
	xemmang(a,n);//in mang ra man hinh
	sapxep(a,n);//Goi ham xap xep mang
	printf("\nMang sau khi sap xep tang la: \n");
	xemmang(a,n); //in mang ra man hinh sau khi sap xep
	ghivaotep(a,n); //Ghi cac phan tu mang sau khi sap xep vao tep output.txt 
}
