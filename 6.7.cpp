#include <conio.h>
#include <stdio.h>
#include <string.h>

typedef struct 
{	
    char hoten[30];
    float hesoluong;
    double luong;
} canbo;
void nhapmang(canbo a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("thong tin can bo %d:",i+1);
        printf("\n-------------------------------------------------------\n");
        printf("Nhap Ho va ten: ");
        fflush(stdin); gets(a[i].hoten);
        printf("Nhap He so luong: ");
        scanf("%f", &a[i].hesoluong);
        a[i].luong = a[i].hesoluong * 1050000;
    }
}
void xemmang(canbo a[], int n)
{
    int i;
    printf("%-25s %-12s %-15s", "Ho va Ten", "He So", "Luong");
    printf("\n-------------------------------------------------------------------");

    for(i = 0; i < n; i++)
        printf("\n%-25s %-12.2f %-15.02f", a[i].hoten, a[i].hesoluong, a[i].luong);
}
void duyet(canbo a[], int n)
{
	int i;
	printf("%-25s %-12s %-15s", "Ho va Ten", "He So", "Luong");
    printf("\n-------------------------------------------------------------------");
    for(i = 0; i < n; i++)
    	if(a[i].luong>=5000000) printf("\n%-25s %-12.2f %-15.02f", a[i].hoten, a[i].hesoluong, a[i].luong);
}
void sapxep(canbo a[], int n)
{
    int i, j;
    canbo tg;
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if (a[i].luong > a[j].luong)
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
}
int main()
{
    canbo ds[50];
    int n;
    printf("Nhap so luong can bo: "); 
    scanf("%d", &n);
    nhapmang(ds, n);
    printf("\n==== Danh sach can bo vua nhap ====\n");
    xemmang(ds, n);
    printf("\n\n==== Danh sach sau khi sap xep ====\n");
    sapxep(ds, n);
    xemmang(ds, n);
    printf("\n\n==== Danh sach can bo luong hon 5 trieu ====\n");
    duyet(ds, n);
    getch();
    return 0;
}
