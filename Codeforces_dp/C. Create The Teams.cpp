#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int
#define pll pair<ll,ll>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define mod 1000000007
#define sz(a) int(a.size())
#define rep(i,x,n) for(int i=x;i<n;i++)
#define repd(i,x,n) for(int i=x;i<=n;i++)
#define MS0(X) memset((X), 0, sizeof((X)))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define du2(a,n) for(int i=0;i<n;i++) cin>>(a[i])

ll gcd(ll a, ll b) {return b ? gcd(b, a % b) : a;}
ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
int main() 
{ 
fastio;
	
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
#endif 
	ll t;
	cin>>t;
	while(t--)
	{



ll n,x;
cin>>n>>x;
int a[n];
du2(a,n);
sort(a,a+n);
int cnt=0,team=0;
for(int i=n-1;i>=0;i--)
{cnt++;
	if(a[i]*cnt>=x){team++,cnt=0;}
}
cout<<team<<endl;



	}
	}