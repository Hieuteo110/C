#include <stdio.h>
void doicho(float *a,float *b)
{
	float t=*a;
	*a=*b;
	*b=t;
}
int main ()
{
	float a,b;
	printf("Nhap gia tri a: ");scanf("%f",&a);
	printf("Nhap gia tri b: ");scanf("%f",&b);
	doicho(&a,&b);
	printf("Sau khi doi gia tri:\n a = %5.2f    b = %5.2f",a,b);
return 0;
}

