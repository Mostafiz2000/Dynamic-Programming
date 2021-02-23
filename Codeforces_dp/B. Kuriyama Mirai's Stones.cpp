#include<bits/stdc++.h>
using namespace std;
long long i,l,r,t,n,a[100002],d[3][100002];
int main()
{

	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		d[1][i]=d[1][i-1]+a[i];
	}
	sort(a+1,a+n+1);
	for(i=1;i<=n;i++)
		d[2][i]=d[2][i-1]+a[i];
	cin>>t;
	while(t--)
	{
		cin>>i>>l>>r;
		cout<<d[i][r]-d[i][l-1]<<endl;
	}
	return 0;
}