#include<stdio.h>
#include<conio.h>
#include<string.h>
void xoa(char s[900],int vitrixoa);
void xoakt(char*s);
int main()
{
    char s[900];
    gets(s);
	xoakt(s);
    puts(s);
    getch();
}
void xoa(char s[900],int vitrixoa)
{
	int n=strlen(s);
    for(int i=vitrixoa;i<n;i++)
     s[i]=s[i+1];
	s[n-1]='\0';
}
void xoakt(char*s)
{
    for(int i=0;i<strlen(s);i++)
		if(s[i]==' ' and s[i+1]==' ')
		{
			xoa(s,i);
			i--;
		}
    if(s[0]==' ')
		xoa(s,0);
    if(s[strlen(s)-1]==' ')
		xoa(s,strlen(s)-1);
}
