#include<string.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//khai bao cau truc
typedef struct {
int giay;
int phut;
int gio;
} thoigian;
//khai bao ham
void nhap(thoigian a[],int n)
{
for ( int i=0;i<n;i++)
    {
    printf("Phan tu thu %d:\n",i+1);
    printf("Nhap giay:");
    scanf("%d",&a[i].giay);
    printf("Nhap phut:");
    scanf("%d",&a[i].phut);
    printf("Nhap gio:");
    scanf("%d",&a[i].gio);
    printf("\n");
    }
}
void hienthi(thoigian a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Phan tu thu %d: ",i+1);
        printf("%d:%d:%d\n",a[i].gio,a[i].phut,a[i].giay);
    }
}
long tonggiay(thoigian a)
{
long tong= a.gio*3600+a.phut*60+a.giay;
return tong;
}
//chuong trinh chinh
int main()
{
    int n;
    nhaplai:
        printf("nhap so nguyen duong n:");
        scanf("%d",&n);
    if (n<0) goto nhaplai;
    thoigian a[n];
    printf("\n======Nhap gia tri thoi gian======\n"); 
    nhap(a,n);
    printf("\n===Bang Gia Tri===\n");
    hienthi(a,n);
    thoigian min = a[0];
    for ( int i=1;i<n;i++)
        if(tonggiay(a[i])<tonggiay(min)) min=a[i];
    printf("Thoi gian be nhat: %d:%d:%d",min.gio,min.phut,min.giay );
return 0;
}