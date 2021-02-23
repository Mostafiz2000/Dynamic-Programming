#include<bits/stdc++.h>
using namespace std;
long long  a[500001],x,ans;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]=a[i-1]+a[i];
    }
    
    for(int i=0;i<n-1;i++)
    {
        if(a[i]*3==a[n-1]*2)ans+=x;
        if(a[i]*3==a[n-1])x++;
    }
    cout<<ans<<endl;
}