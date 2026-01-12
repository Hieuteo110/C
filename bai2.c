#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//cau truc thoi gian
typedef struct{
int gio;
int phut;
int giay;
}thoigian;
//ham
int tonggiay(thoigian a)
{
    return a.gio*3600+a.phut*60+a.giay;
}
void nhap(int n,thoigian a[])
{
    int i=0;
    printf("===NHAP GIA TRI===\n\n");
    for (i;i<n;i++)
    {
        printf("Nhap phan tu thoi gian %d:\n",i+1);
        printf("Nhap Gio: ");scanf("%d",&a[i].gio);
        printf("Nhap Phut: ");scanf("%d",&a[i].phut);
        printf("Nhap Giay: ");scanf("%d",&a[i].giay);
        printf("\n");
    }
}    
void hienthi(int n,thoigian a[])
{
    printf("===BANG GIA TRI===\n\n");
    for(int i=0;i<n;i++)
    {
        printf("Phan tu thoi gian %d:\n",i+1);
        printf("%d:%d:%d",a[i].gio,a[i].phut,a[i].giay);
        printf("\n");
    }
}
void min(int n, thoigian a[])
{
    thoigian min=a[0];
    printf("\nThoi gian be nhat: ");
    for(int i=0;i<n;i++)
        if(tonggiay(a[i])<tonggiay(min))
            min=a[i];
    printf("%d:%d:%d",min.gio,min.phut,min.giay);        
}
int main()
{
    int n;
    thoigian a[100];
    nhaplai:
        printf("nhap so nguyen duong: ");
        scanf("%d",&n);
    if(n<0) goto nhaplai;
    nhap(n,a);
    hienthi(n,a);
    min(n,a);
    return 0;
}