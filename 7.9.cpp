#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void doc ()
{
	FILE *f;
	char ch;
	f=fopen("output9.txt","r");
    while ((ch = fgetc(f)) != EOF)
    	printf("%c",ch);
    fclose(f);  
}
int main() 
{
    FILE *f, *g;
    char ch[100];
    int d= 0,s;
    f=fopen("input9.txt","w");
    printf("Nhap vao xau ki tu: ");
    gets(ch);
    fprintf(f,"%s",ch);
	fclose(f);
    f=fopen("input9.txt", "r");
    while ((s = fgetc(f)) != EOF) 
        if (isalpha(s)==0) d++;
    fclose(f);
    g=fopen("output9.txt", "w");
    fprintf(g, "So ki tu khong phai chu cai : %d\n", d);
    fclose(g);
    doc();
    return 0;
}

