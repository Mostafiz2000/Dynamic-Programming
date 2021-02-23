#include<bits/stdc++.h>
using namespace std;
int n;
int a[]={1,5,10,20,100};
int main()
{
    cin>>n;
    int ans=0;
  while(n)
  {
      for(int i=4;i>=0;i--)
      {
          if(n/a[i]!=0)
          {
              ans+=n/a[i];
             
              n=n%a[i];
          }
      }
  }
  cout<<ans<<endl;
    
}