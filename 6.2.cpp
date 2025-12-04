#include <conio.h>
#include <stdio.h>
#include <string.h>
typedef struct
{
	char ten[30],sbd[30];
	float diem1,diem2,diem3,tong;
	unsigned int tuoi;
}thisinh;
void nhapmang(thisinh a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Thi sinh thu %d: ",i+1);
        printf("\n-------------------------------------------------------\n");
        printf("Nhap Ho va Ten: ");
        fflush(stdin); gets(a[i].ten);
        printf("Nhap Tuoi: ");
        scanf("%u", &a[i].tuoi);
        printf("Nhap SBD: ");
        fflush(stdin); gets(a[i].sbd);
        printf("Nhap diem mon 1: ");
        scanf("%f", &a[i].diem1);
        printf("Nhap diem mon 2: ");
        scanf("%f", &a[i].diem2);
        printf("Nhap diem mon 3: ");
        scanf("%f", &a[i].diem3);
        a[i].tong=a[i].diem1+a[i].diem2+a[i].diem3;
    }
}
void xemmang(thisinh a[], int n)
{
    int i;
    printf("%-10s %-25s %-10s %-12s %-12s %-12s %-12s",
           "SBD", "Ho va Ten", "Tuoi",
           "Diem 1", "Diem 2", "Diem 3", "Tong");
    printf("\n--------------------------------------------------------------------------------------");
    for(i = 0; i < n; i++)
        printf("\n%-10s %-25s %-10u %-12.2f %-12.2f %-12.2f %-12.2f",
               a[i].sbd, a[i].ten, a[i].tuoi,
               a[i].diem1, a[i].diem2, a[i].diem3, a[i].tong);
}
void duyet(thisinh a[], int n)
{
    int i;
    printf("%-10s %-25s %-10s %-12s %-12s %-12s %-12s",
           "SBD", "Ho va Ten", "Tuoi",
           "Diem 1", "Diem 2", "Diem 3", "Tong");
    printf("\n--------------------------------------------------------------------------------------");

    for(i = 0; i < n; i++)
        if(a[i].tong >= 15)
            printf("\n%-10s %-25s %-10u %-12.2f %-12.2f %-12.2f %-12.2f",
                   a[i].sbd, a[i].ten, a[i].tuoi,
                   a[i].diem1, a[i].diem2, a[i].diem3, a[i].tong);
}
int main ()
{
	thisinh a[50];
	int n;
	printf("Nhap so luong thi sinh: ");scanf("%d",&n);
	nhapmang(a, n);
	printf("\n======= Danh sach thi sinh =======\n");
    xemmang(a, n);
    printf("\n");
    printf("\n======= Danh sach thi sinh tong diem >=15 =======\n");
	duyet(a,n);
	getch();
return 0;
}

