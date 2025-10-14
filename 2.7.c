#include <stdio.h>

int main() {
    int a, b, c, max1,min1,max,min;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    printf("Nhap so c: ");
    scanf("%d", &c);
    max1=a>b?a:b;
    max=max1>c?max1:c;
    min1=a<b?a:b;
    min=min1<c?min1:c;
    printf("So lon nhat: %d\n", max);
    printf("So be nhat: %d\n", min);
    return 0;
}