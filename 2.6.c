#include <stdio.h>

int main() {
    float a, b, chuvi, dientich;

    printf("Nhap chieu dai: ");
    scanf("%f", &a);
    printf("Nhap chieu rong: ");
    scanf("%f", &b);

    chuvi = 2 * (a + b);
    dientich = a * b;

    printf("Chu vi hinh chu nhat = %.2f\n", chuvi);
    printf("Dien tich hinh chu nhat = %.2f\n", dientich);

    return 0;
}