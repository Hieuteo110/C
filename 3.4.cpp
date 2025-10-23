#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, c, delta, x1, x2;
    char tieptuc='c';
    while(tieptuc!='k'&&tieptuc!='K')
    {
    	printf("Nhap a, b, c: ");
	    scanf("%lf %lf %lf", &a, &b, &c);
	    if (a == 0) 
		{
	        if (b == 0) 
			{
	            if (c == 0)
	                printf("Phuong trinh co vo so nghiem.\n");
	            else
	                printf("Phuong trinh vo nghiem.\n");
	        } 
			else 
			{
	            x1 = -c / b;
	            printf("Phuong trinh co nghiem duy nhat: x = %.2lf\n", x1);
	        }
	    } 
		else 
		{
	        delta = b*b - 4*a*c;
	        if (delta < 0)
	            printf("Phuong trinh vo nghiem.\n");
	        else if (delta == 0) 
			{
	            x1 = -b / (2*a);
	            printf("Phuong trinh co nghiem kep: x1 = x2 = %.2lf\n", x1);
	        } 
			else 
			{
	            x1 = (-b + sqrt(delta)) / (2*a);
	            x2 = (-b - sqrt(delta)) / (2*a);
	            printf("Phuong trinh co 2 nghiem phan biet:\n");
	            printf("x1 = %.2lf\n", x1);
	            printf("x2 = %.2lf\n", x2);
	        }
	    }
	printf("Co tiep tuc khong c/k: ");
	fflush(stdin);
	tieptuc=getchar();
	}
	printf("\n=====Ket thuc chuong trinh====");
return 0;
}
