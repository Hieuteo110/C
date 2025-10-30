#include <stdio.h>
int main ()
{
	int n,nhat=0,nhi=0,ba=0,kk=0,khong=0;
	nhap:
		printf("Nhap so nguyen duong n: ");
		scanf("%d",&n);
	if(n<=0) goto nhap;
	float a[n],s=0;
	printf("Nhap vao %d so diem: ",n);
	for (int i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		s+=a[i];
		if (a[i]<=20&&a[i]>=19) nhat++;
		else if (a[i]>=17&&a[i]<19) nhi++;
		else if (a[i]>=15&&a[i]<17) ba++;
		else if (a[i]>=10&&a[i]<15) kk++;
		else khong++;
	}
	printf("Tong so diem: %.2f\n",s);
	printf("Diem trung binh: %.2f\n",s/n);
	printf("So giai nhat: %d\n",nhat);
	printf("So giai nhi: %d\n",nhi);
	printf("So giai ba: %d\n",ba);
	printf("So giai khuyen khich: %d\n",kk);
	printf("So khong co giai: %d\n",khong);
return 0;
}
