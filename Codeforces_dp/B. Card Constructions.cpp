#include <bits/stdc++.h>
using namespace std;
int t,n;
int main() {
	cin>>t;
	while(t--)
	{
		cin>>n;
		int k=0;
		while(n>=2)
		{
			k++;
			int j=2;
			while(n>=j)
			{
				n-=j;
				j+=3;
			}
		}
		cout<<k<<endl;
	}
}