#include <stdio.h>

int main()
{
	double p=100000000,r=0.07;
	for (int i=1;i<=3;i++)
	{
		p*=(1+r);
	}
	printf("Ca goc va lai: %.0f",p);

return 0;
}

