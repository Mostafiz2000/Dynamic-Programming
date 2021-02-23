#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int t,n,k,z;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&n,&k,&z);
		int sum=0,ans=0,mx=0;k++;
		for(int i=1;i<=n;i++) 
		  scanf("%d",&a[i]);
		for(int i=1;i<=k;i++)
		{
			sum+=a[i];
	
			  mx=max(mx,a[i]+a[i+1]);
			ans=max(ans,min((k-i)/2,z)*mx+sum);
		}
		printf("%d\n",ans); 
	}

}