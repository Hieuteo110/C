#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void doixau(int n,char a[])
{
    int i=0;
    if(n==0)
    {
        a[i]='0';
        a[i+1]='\0';
        return;
    }
    while(n>0)
    {
        int du=n%10;
        a[i]=du+'0';
        i++;
        n/=10;
    }
    a[i]='\0';
}
void daonguoc(char a[])
{
    int len=strlen(a);
    for(int i=0;i<len/2;i++)
    {
        int tg=a[i];
        a[i]=a[len-i-1];
        a[len-1-i]=tg;
    }
}
int main()
{
    int n;
    char a[100];
    nhaplai:
        printf("nhap so nguyen duong: ");
        scanf("%d",&n);
    if(n<0) goto nhaplai;
    fflush(stdin);
    doixau(n,a);
    daonguoc(a);
    printf("xau so nguyen: %s",a);
    return 0;
}