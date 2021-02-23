#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[100010],b[100010],f[100010][2];
int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	cin>>a[i];
	for(int i=1;i<=n;++i)
	cin>>b[i];
	for(int i=1;i<=n;++i){
	f[i][0]=max(f[i-2][1],f[i-1][1])+a[i];
	
	f[i][1]=max(f[i-2][0],f[i-1][0])+b[i];

	}
	cout<<max(f[n][0],f[n][1])<<endl;
	return 0;
}