#include <stdio.h>
int ucln(int a,int b) 
{
    while (b!=0)
	{
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main() 
{
    int a,b;
    printf("Nhap a: ");scanf("%d", &a);
    printf("Nhap b: ");scanf("%d", &b);
    printf("UCLN = %d",ucln(a, b));
    printf("\nBCNN = %d",(a*b)/ucln(a, b));

    return 0;
}

