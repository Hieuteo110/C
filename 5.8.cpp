#include <stdio.h>
#include <math.h>
int nguyento(int n)
{
	int nguyento=0,i; 
    for (i=2;i<=sqrt(n);i++) 
        if(n%i==0) 
		{
            nguyento=1;
            break;
        }
    return nguyento;
}
void ngtosau( int n)
{
	int i;
	for(i=n+1;i>n;i++)
		if (nguyento(i)==0)
		{
			printf("So nguyen to sat sau %d la: %d",n,i);
			break;
		}
}
int main ()
{	
	int n;
	nhaplai:
   		printf("Nhap so nguyen duong n: ");
    	scanf("%d",&n);
    if(n<=0) goto nhaplai;
	ngtosau(n);

return 0;
}

