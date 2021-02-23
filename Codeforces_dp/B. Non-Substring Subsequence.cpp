#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      string s;
      cin>>s;
   
     while(m--)
     {int f=0;
         int l,r;
         cin>>l>>r;
         l--,r--;
         int x=l,y=r;
         if(x!=0)x--;
         if(y!=n-1)y++;
         while(x>=0&&x!=l)
         {
             if(s[x]==s[l])
             {
                 f=1;
                 break;
             }
             x--;
         }
         while(y<=n-1&&y!=r)
         {
             if(s[y]==s[r])
             {
                 f=1;
                 break;
             }
             y++;
         }
         if(f&&r-l+1!=n)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }
    }
}