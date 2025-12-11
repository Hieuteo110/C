#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void doc ()
{
	FILE *f;
	char ch;
	f=fopen("output1.txt","r");
    while ((ch = fgetc(f)) != EOF)
    	printf("%c",ch);
    fclose(f);  
}
int main() 
{
    FILE *f, *g;
    char s,ch[100];
    int d= 0;
    f=fopen("input1.txt","w");
    printf("Nhap vao xau ki tu: ");
    gets(ch);
    fprintf(f,"%s",ch);
	fclose(f);
    f=fopen("input1.txt", "r");
    while ((s = fgetc(f)) != EOF) 
        if (isalpha(s)) d++;
    fclose(f);
    g=fopen("output1.txt", "w");
    fprintf(g, "So chu cai: %d\n", d);
    fclose(g);
    doc();
    return 0;
}

