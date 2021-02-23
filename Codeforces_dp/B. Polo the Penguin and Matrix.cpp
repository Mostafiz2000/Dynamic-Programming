#include <bits/stdc++.h>
using namespace std;
 
int m,i,r,a,n,d;
 
int main()
    {
    cin>>n>>m>>d;n=n*m;
 
    int v[n];
    for (i=0;i<n;++i)
        cin>>v[i];
    sort(v,v+n);
    for(int i:v)if ((i-v[0])%d)cout<<-1,exit(0);
    for(int i:v)
    r+=abs(i-v[n/2])/d;
    cout<<r;
    return 0;
    }