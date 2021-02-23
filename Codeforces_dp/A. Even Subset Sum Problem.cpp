#include<bits/stdc++.h>
using namespace std;
vector<int>g;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        g.clear();
        int n,ev=0,od=0,ans;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                ev++;
                ans=i+1;
            }else {od++;
            g.push_back(i+1);}
            
        }
        if(ev)
        {
            cout<<1<<endl<<ans<<endl;
            continue;
        }else if(od>=2)
        {
            cout<<2<<endl;
            for(int i=0;i<2;i++)
            {
                cout<<g[i]<<" ";
            }
            cout<<endl;
            
        }
        else cout<<-1<<endl;
        
    }
}