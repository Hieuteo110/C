#include <conio.h>
#include <stdio.h>
void nhap(float a[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nNhap phan tu thu %d: ",i);
		scanf("%f",&a[i]);
	}
}
//===================================
void xem(float a[], int n)
{
	int i;
	printf("\nXem mang: ");
	for(i=0;i<n;i++)
		printf("%5.2f",a[i]);
}
//==================================
float tinh_tong(float a[], int n)
{
	float s=0;
	int i;
	for(i=0;i<n;i++)
		s=s+a[i];
	return s;
}
//===================================
float trungbinh(float a[], int n)
{
	float tb;
	tb=tinh_tong(a,n)/n;
	return tb;
}
//===================================
//1. Ham dem so phan tu am
int am(float a[], int n)
{
    int dem=0,i=0;
    for (i;i<n;i++)
        if (a[i]<0) dem++;
    return dem;    
}
//2. Ham dem so phan tu duong
int duong(float a[], int n)
{
    int dem=0,i=0;
    for (i;i<n;i++)
        if (a[i]>0) dem++;
    return dem;    
}
//3. Ham sap xep mang
void sapxep(float a[], int n)
{
    int i=0;
    for (i; i<n-1;i++) 
        for (int j=i+1;j<n;j++) 
            if (a[i] > a[j]) 
            {
                float t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
    printf("\nMang sau khi sap xep: \n");
    for (int i = 0; i < n; i++)
        printf("%5.2f ", a[i]);
}        
//4. Ham tim max mang
float max(float a[], int n)
{
    return a[n-1];
}
//5. Ham tim min mang
float min(float a[], int n)
{
    return a[0];
}
//.....
//===================================
int main()
{
	float x[10];
	int m;
	printf("Nhap so phan tu m = ");
	scanf("%d",&m);
	nhap(x,m);  //hoac nhap(&x[0],m);
	xem(x,m);  //hoac xem(&x[0],m);
	printf("\nTong mang = %5.2f",tinh_tong(x,m));
	printf("\nTrung binh chung = %5.2f",trungbinh(x,m));
    printf("\nSo am: %d",am(x,m));
    printf("\nSo duong: %d",duong(x,m));
    sapxep(x,m);
    printf("\nMax = %5.2f",max(x,m));
    printf("\nMin = %5.2f",min(x,m));
	return 0;
}
