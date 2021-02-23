#include<bits/stdc++.h>
using namespace std;
int t,n,x,y,a;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		x=y=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a;
			if(a==1) x++;
			else y++;
		}
		if(x%2||(x==0&&y%2)) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}