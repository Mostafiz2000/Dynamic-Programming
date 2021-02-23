#include<iostream>
using namespace std;
long long T;
long long n,q,a;
long long pos,nag;
int main(){
	cin>>T;
	while(T--){
		cin>>n>>q;
		pos=0,nag=0;
		for(int i=1;i<=n;i++){
			scanf("%lld",&a);
			long long t=pos;
			pos=max(nag+a,pos);
			nag=max(t-a,nag);
		}
		cout<<max(pos,nag)<<endl;
	}
	
	return 0;
}