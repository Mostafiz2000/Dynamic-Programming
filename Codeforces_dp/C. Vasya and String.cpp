#include <iostream>
using namespace std;
int main ()
{
	int n,k,c=1,j=0,aa=0,bb=0;
	char a[100000];
	cin>>n>>k;
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
		(a[i]=='a')?aa++:bb++;
		while (aa>k && bb>k && j!=i-1) {(a[j]=='a')?aa--:bb--; j++;}
		if (i-j+1>c)
			c=i-j+1;
	}
	cout<<c<<endl;
	return 0;
}
 