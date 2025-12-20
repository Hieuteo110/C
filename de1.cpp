#include <stdio.h>
struct sophuc
{
	float thuc;
	float ao;
};
void hienthi(struct sophuc sp[],int n)
{	
	for (int i=0;i<n;i++)
		printf("So phuc %d: %.2f+i*%.2f\n",i+1,sp[i].thuc,sp[i].ao); 
}
int main ()
{
	int n;
	struct sophuc sp[100];
	printf("Nhap so luong so phuc: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Nhap so thuc thu %d:\n",i+1);										
		printf("Nhap phan thuc: ");scanf("%f",&sp[i].thuc);
		printf("Nhap phan ao: ");scanf("%f",&sp[i].ao);
	}
	printf("Danh sach so phuc: \n");
	hienthi(sp,n);
return 0;
}

