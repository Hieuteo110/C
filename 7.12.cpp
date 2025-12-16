#include <stdio.h>
void doc ()
{
	FILE *f;
	char ch;
	f=fopen("output12.txt","r");
    while ((ch = fgetc(f)) != EOF)
    	printf("%c",ch);
    fclose(f);  
}
int check(int n)
{
	int i;
    if (n < 2)
        return 0;
    for (i = 2; i*i<= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
void nhapmang(int a[],int *n)
{
	FILE *f;
	int i=0;
	f=fopen("input12.txt","r");
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
void nguyento(int a[],int n)
{
	FILE *f;
	f=fopen("output12.txt","w");
	fprintf(f,"Cac so nguyen to la:");
	int i;
	for (i=0;i<n;i++)
		if (check(a[i])==1) fprintf(f," %d",a[i]);
	fclose(f);
}
int main()
{
	int a[100],n;
	nhapmang(a,&n);
	printf("\nMang duoc nhap vao: \n");
	xemmang(a,n);
	nguyento(a,n);
	printf("\n\n");
	doc();
}
