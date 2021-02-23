#include<iostream>
#include<cmath>
using namespace std;
int a[200005];
int main(){
	
	int n;
	cin>>n; 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int l=1,ans=-1;
    
	for(int i=0;i<n;i++){
		if(a[i]<a[i+1]&&a[i+1]<=a[i]*2){
			l++;
		}
		else {
			ans=max(ans,l);
			l=1;
		}
	}
	cout<<ans;
	
	
	
} 