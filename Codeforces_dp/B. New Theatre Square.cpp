#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        string s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='.'&&s[i][j+1]=='.')
                {
                    if(2*x>y)sum+=y;
                    else sum+=2*x;
                    j++;
                }
                else if(s[i][j]=='.')
                {
                    sum+=x;
                }
                else continue;
            }
        }
        cout<<sum<<endl;
    }
}