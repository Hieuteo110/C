#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//ham
void nhapmang(int a[][20],int *n,int *m)
{
    FILE *f;
    f=fopen("input.txt","r");
    fscanf(f,"%d%d",n,m);
    for(int i=0;i<*n;i++)
        for(int j=0;j<*m;j++)
            fscanf(f,"%d",&a[i][j]);
    fclose(f);        
}    
void hienthi(int a[][20],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ",a[i][j]);
        printf("\n");    
    }        
}
void ghivaotep(int a[][20],int n, int m)
{
	FILE *f;
	f=fopen("output.txt","w");
	for(int j=0;j<m;j++)
	{
		int tongcot=0;
		for(int i=0;i<n;i++)
			tongcot+=a[i][j];
		fprintf(f,"Tong cot %d: %d",j+1,tongcot);
	    fprintf(f,"\n");
	}
	printf("Da ghi vao tep");
	fclose(f);
}
int main()
{
    int n,m;
    int a[100][20];
    nhapmang(a,&n,&m);
    hienthi(a,n,m);
    ghivaotep(a,n,m);
    return 0;
}