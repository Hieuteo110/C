#include <stdio.h>
int main ()
{
	double s=10000000,lai=10000000;
	for (int i=1;i<=10;i++)
	{
		lai*=1.1;
		s+=lai;
	;
	}
	printf("Ket qua: %.0lf",s);

return 0;
}
