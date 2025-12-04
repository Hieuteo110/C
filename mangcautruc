#include <conio.h>
#include <stdio.h>
#include <string.h>

typedef struct 
{	
    char hoten[30],manv[10];
    float hesoluong;
    double luong;
} nhanvien;
void nhapmang(nhanvien a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Nhap Ma nhan vien: ");
        fflush(stdin); gets(a[i].manv);
        
        printf("Nhap Ho va ten: ");
        fflush(stdin); gets(a[i].hoten);
        
        printf("Nhap He so luong: ");
        scanf("%f", &a[i].hesoluong);
        
        a[i].luong = a[i].hesoluong * 1800000;
    }
}
void xemmang(nhanvien a[], int n)
{
    int i;
    printf("\n%-10s %-30s %-10s %-15s", "Ma NV", "Ho va Ten", "He So", "Luong");
    printf("\n-------------------------------------------------------------------");
    for(i = 0; i < n; i++)
        printf("\n%-10s %-30s %-10.2f %-15.0lf", a[i].manv, a[i].hoten, a[i].hesoluong, a[i].luong);
} 

void luongtrungbinh(nhanvien a[], int n)
{
    double tong = 0;
    int i;
    for(i = 0; i < n; i++)
        tong += a[i].luong;
    printf("\n\n Luong trung binh cua %d nhan vien la: %.0lf VND", n, tong/n);
}

void max(nhanvien a[], int n)
{
    int i;
    double max = a[0].luong;
    int dem = 0;
    for(i = 1; i < n; i++)
        if(a[i].luong > max) max=a[i].luong;
    printf("\n\n Danh sach nhan vien co luong cao nhat (%.0lf):", max);
    for(i = 0; i < n; i++)
        if(a[i].luong == max)
        {
            printf("\n - %s (Ma: %s)", a[i].hoten, a[i].manv);
            dem++;
        }    
    printf("\n So nhan vien luong cao nhat: %d", dem);
}

void sapxep(nhanvien a[], int n)
{
    int i, j;
    nhanvien tg;
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if (a[i].luong < a[j].luong)
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
}
int main()
{
    nhanvien ds[50];
    int n;
    printf("Nhap so luong nhan vien: "); 
    scanf("%d", &n);
    nhapmang(ds, n);
    printf("\n==== Danh sach nhan vien vua nhap ====\n");
    xemmang(ds, n);
    luongtrungbinh(ds, n);
    max(ds, n);
    sapxep(ds, n);
    printf("\n\n==== Danh sach sau khi sap xep (Luong giam dan) ====\n");
    xemmang(ds, n);
    getch();
    return 0;
}
