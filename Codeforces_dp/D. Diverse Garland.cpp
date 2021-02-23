#include<bits/stdc++.h>
using namespace std;
string x="RGB";
int main()
{
    int n,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            for(int j=0;j<3;j++)
            {
                s[i]=x[j];
                if(s[i]!=s[i+1]&&s[i]!=s[i-1]){
                    c++;
                    break;
                }
                
                
            }
        }
    }
    cout<<c<<endl;
    cout<<s<<endl;
    
}