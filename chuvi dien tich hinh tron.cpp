#include <stdio.h>      
#include <conio.h>	
//#include <math.h> 
#define pi 3.14 //hoac 314e-2
int main()
{
	float r,cv,dt;
	printf("Moi nhap r = "); scanf("%f",&r);
	cv=2*pi*r;
	dt=pi*r*r;
	printf("Chu vi = %5.2f\nDien tich = %5.2f",cv,dt);
	getch();
	return 0;
}     
    