#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int dp[1000020];
int main()
{
long long  n,k;
cin>>n>>k;
dp[0]=1;
for(int i=1;i<1000020;i++)
{
    dp[i]=dp[i-1];
    if(i>=k)
    dp[i]=(dp[i]+dp[i-k])%mod;
    
}
for(int i=1;i<1000020;i++)
{
    dp[i]=(dp[i]+dp[i-1])%mod;
    
}
while(n--){
    int a,b;
    cin>>a>>b;
    cout<<(dp[b]-dp[a-1]+mod)%mod<<endl;;
    
}

}