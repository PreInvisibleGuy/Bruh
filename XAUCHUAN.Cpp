#include<string.h>
#include<bits/stdc++.h>
using namespace std;
void xoa(char s[1001],int vitrixoa)
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
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("XAUCHUAN.INP  ","r",stdin);
freopen("XAUCHUAN.OUT","w ",stdout);
    char s[1001];
     gets(s);
	xoakt(s);
	cout<<s;
    return 0;
}
