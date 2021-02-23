#include<iostream>
#include<set>
using namespace std;
int i,n,m,l,a[100005];
set<int>s;
int main(){
    cin>>n>>m;
    for(i=1;i<=n;i++){cin>>a[i];}
    for(i=n;i>=1;i--){s.insert(a[i]); a[i]=s.size();}i=0;
    while(i<m){	cin>>l;	cout<<a[l]<<endl; i++;}
return 0;
}