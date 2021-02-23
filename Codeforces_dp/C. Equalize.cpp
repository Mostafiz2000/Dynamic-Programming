#include <iostream>
using namespace std;
long long i,n,s=0;
string a,b;
int main(){
cin>>n>>a>>b;
for(i=0;i<n;i++)
if(a[i]!=b[i]){
if(i<n-1&&a[i]==b[i+1]&&b[i]==a[i+1]) 
i++;
s++;
}
cout<<s;
return 0;
}