#include <bits/stdc++.h>
using namespace std;

int n,a,b,x,y,i;
string s,r,t;
map <string,int> mp;
main(){
	cin>>n;
	
	while(i<n){
		cin>>s>>r>>t;
		
		transform(s.begin(),s.end(),s.begin(),::tolower);
		transform(t.begin(),t.end(),t.begin(),::tolower);
		
		mp[s]=mp[t]+1;
		x=max(x,mp[s]);
		i++;
	}
	cout<<x+1;
}