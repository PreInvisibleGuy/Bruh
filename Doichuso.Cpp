#include<bits/stdc++.h>
using namespace std;
int k,i,j;
string s;
int main()
{
    //freopen("Doichuso.inp","r",stdin);
    //freopen("Doichuso.out","w",stdout);
    cin>>k>>s;
    for(i=0;i<s.size(); i++)
    {
       char Max=s[s.size()-1];
        int vt=s.size()-1;
        for(j=s.size()-1;j>i and k>0;j--)
        {
            if(Max<s[j])
            {
                Max=s[j];
                vt=j;
            }
            if(Max>s[i])
            {
                swap(s[i],s[vt]);
                k++;
            }
        }
    }
    cout<<s;

}

