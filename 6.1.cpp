#include <conio.h>
#include <stdio.h>
#include <string.h>
typedef struct
{
	char ten[30],tacgia[30];
	unsigned int trang;
}sach;
void nhapmang(sach a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Cuon sach thu %d: ",i+1);
        printf("\n-------------------------------------------------------\n");
        printf("Nhap ten cuon sach: ");
        fflush(stdin); gets(a[i].ten);
        printf("Nhap ten tac gia: ");
        fflush(stdin); gets(a[i].tacgia);
        printf("Nhap so trang: ");
        scanf("%u", &a[i].trang);
    }
}
void xemmang(sach a[], int n)
{
    int i;
    printf("%-10s %-30s %-10s", "Ten sach", "Tac gia", "So trang");
    printf("\n-------------------------------------------------------------------");
    for(i = 0; i < n; i++)
        printf("\n%-10s %-30s %-10d", a[i].ten, a[i].tacgia, a[i].trang);
} 
void sapxep(sach a[], int n)
{
    int i, j;
    sach tg;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[i].trang > a[j].trang)
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
}
int main ()
{
	sach a[50];
	int n;
	printf("Nhap so cuon sach: ");scanf("%d",&n);
	nhapmang(a, n);
	printf("\n===== Danh sach cuon sach truoc khi sap xep =====\n");
    xemmang(a, n);
    printf("\n");
    printf("\n===== Danh sach cuon sach sau khi sap xep =====\n");
    sapxep(a, n);
    xemmang(a, n);
	getch();
return 0;
}

