#include <stdio.h>
int main()
{
	int a, b, x, y, r, UCLN, BCNN;
	nhaplai:
	    printf("Nhap hai so nguyen duong a va b: ");
	    scanf("%d %d", &a, &b);
	if(a<0||b<0) goto nhaplai;
    x = a;
    y = b;
    while (b != 0) 
	{
        r = a % b;
        a = b;
        b = r;
    }
    UCLN = a;
    BCNN = (x * y) / UCLN;
	printf("UCLN la %d, BCNN la %d",UCLN,BCNN);
return 0;
}

