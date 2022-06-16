#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long x,j=0,max=INT_MIN,min=-1e6,vtmax=0,vtmin=0,hieu=-1e6;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x>max){
			max=x;
			vtmax=j;
		}
		if(x<min){
			min=x;
			vtmin=j;
		}
		if(max-min>hieu && vtmax>vtmin){
			hieu=max-min;
		}
		j++;
	}
	cout<<hieu;
	return 0;
}
