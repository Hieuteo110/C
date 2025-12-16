#include <stdio.h>
void doc ()
{
	FILE *f;
	char ch;
	f=fopen("output4.txt","r");
    while ((ch = fgetc(f)) != EOF)
    	printf("%c",ch);
    fclose(f);  
}
void nhapmang(int a[],int *n)
{
	FILE *f;
	int i=0;
	f=fopen("input4.txt","r");
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
void maxmin(int a[],int n)
{
	FILE *f;
	int i;
	int max=a[0],min=a[0];
	for (i=0;i<n;i++)
	{
		if (a[i]>=max) max=a[i];
		else if (a[i]<min) min=a[i];
	}
	f=fopen("output4.txt","w");
	fprintf(f,"So lon nhat la: %d\n",max);
	fprintf(f,"So be nhat la: %d\n",min);
	fclose(f);
}
int main()
{
	int a[100],n;
	nhapmang(a,&n);
	printf("\nMang duoc nhap vao: \n");
	xemmang(a,n);
	maxmin(a,n);
	printf("\n\n");
	doc();
}
