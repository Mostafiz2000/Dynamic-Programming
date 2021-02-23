#include <bits/stdc++.h>

#define mcm(a,b) (a*b/__gcd(a,b))

typedef long long ll;
using namespace std;

ll L=10000000000000ll,N,M=1,S,V[100005],a,b;
vector<ll> E[100005];

void f(int n, int p, ll d)
{
    M=mcm(M,d);
    if(d>S||d<0){cout<<S; exit(0);}
    if(E[n].size()==1&&n>1)L=min(L,d*V[n]);
    for(int v:E[n])if(v!=p)f(v,n,d*(E[n].size()-(n==1?0:1)));
}

int main()
{
    cin>>N;
    for(int i=1;i<=N;i++) cin>>V[i], S+=V[i];
    for(int i=1;i<N;i++) cin>>a>>b, E[a].push_back(b), E[b].push_back(a);
    f(1,0,1);
    cout<<S-L/M*M;
}