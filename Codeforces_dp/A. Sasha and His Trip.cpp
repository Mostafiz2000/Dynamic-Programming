#include<bits/stdc++.h>
using namespace std;

int n,v,k;

int main(){
	cin>>n>>v;
	k=n-v;
	if(v>n-1){
		cout<<n-1;
		return 0;
	}
	else{
		cout<<k*(k+1)/2+v-1;
	}
}