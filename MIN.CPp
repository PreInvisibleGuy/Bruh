#include<bits/stdc++.h>
using namespace std;
int k,i,j,ma,m;
string a;
int main(){
	freopen("MIN.INP","r",stdin);
    freopen("MIN.OUT","w",stdout);
    cin>>k>>a;
    for(i=0;i<a.size();i++)
    {
    	if(a[i]>='a' and a[i]<='z')
    	{
    		a.erase(i,1);
    		i--;
		}
	}
	while(a.size()>k)
	{
		ma=a[0]-a[1];
		m=0;
		for(i=0;i<a.size()-1;i++)
		{
			if(a[i]-a[i+1]>ma)
			{
				ma=a[i]-a[i+1];
				m=i;
			}
		}
		a.erase(m,1);
	}
	cout<<a;
}
