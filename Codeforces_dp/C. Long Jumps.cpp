#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
     long long int dp[n+1],sum=0;
     memset(dp,0,sizeof(dp));
     dp[n]=0;
     dp[n-1]=a[n-1];
     sum=a[n-1];
     for(int i=n-2;i>=0;i--)
     {
          dp[i]=a[i];
         if(i+a[i]<=n)
        dp[i]+=dp[i+a[i]];
         sum=max(dp[i],sum);
     }
    cout<<sum<<endl;
    }
}