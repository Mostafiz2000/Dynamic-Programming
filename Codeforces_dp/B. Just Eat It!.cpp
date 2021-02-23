#include <iostream>
using namespace std;
int t,n,i;
 
int main() {
	cin>>t;
	while(t--){
		long long x=0,l=0,p=0,r=0,ans=0;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cin>>x;
			p+=x;
			if(p>ans)ans=p,r=i;
			if(p<=0)p=0,l=i;
		}
		if(r==n && l==0)cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}