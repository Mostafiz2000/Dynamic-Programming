#include<bits/stdc++.h>
using namespace std;
int a[500];
int main()
{
    int n,k,c=0;
    cin>>n>>k;
for(int i=1;i<=n;i++)
{
    cin>>a[i];
}
if(n==1&&k>a[1])
{
    cout<<0<<" "<<a[1]<<endl;
    return 0;
    
}
else 
{
    for(int i=2;i<=n;i++)
    {
        if((a[i-1]+a[i])<k)
        {int x=a[i];
            a[i]=k-(a[i-1]+a[i])+a[i];
            c+=a[i]-x;
            
            
        }
    }
    cout<<c<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}

}