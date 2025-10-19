#include <stdio.h>

int main()
{
	int tong=1000000,tieu=10000,ngay=0;
	while(1)
	{	
		tong-=tieu;
		ngay++;
		tieu*=2;
		if (tong<tieu) break;
	}
	tong/=1000;
	printf("So ngay: %d\n",ngay);
	printf("So tien con lai: %.3f dong",(float)tong);
return 0;
}

