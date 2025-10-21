#include <stdio.h>

int main()
{
	double a,b,c,d,f,e,x,y,dinhthuc;
	printf("Nhap lan luot a, b, c, d, e, f :\n");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
	dinhthuc=(a*e)-(b*d);
	x=(c*e)-(b*f);
	y=(a*f)-(c*d);
	if (dinhthuc==0)
	{
		if (x==0&&y==0)
			printf("Phuong trinh co vo so nghiem");
		else 
			printf("Phuong trinh vo nghiem");	
	}
	else 
	{
		x=x/dinhthuc;
		y=y/dinhthuc;
		printf("Co nghiem la: (%.2lf;%.2lf)",x,y);
	}
return 0;
}

