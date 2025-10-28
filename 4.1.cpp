#include <stdio.h>
#include <math.h>

int main() 
{
    int n, i, nguyento=0;

	nhaplai:
	    printf("Nhap so nguyen duong n: ");
	    scanf("%d", &n);
    if (n <= 0) goto nhaplai;
    if (n == 1) printf("1 khong phai la so nguyen to\n");
    else if (n == 2) printf("2 la so nguyen to\n");
    else 
	{
        for (i = 2; i <= sqrt(n); i++) 
		{
            if (n % i == 0) 
			{
                nguyento = 1;
                break;
            }
        }
        if (nguyento==0)
            printf("%d la so nguyen to\n", n);
        else
            printf("%d khong phai la so nguyen to\n", n);
    }
    return 0;
}

