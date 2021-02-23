#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a[100005], q, x,sum;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> a[i];
	cin >> q;
	sort(a, a+n);
	for (int i = 0; i < q; i++){
		cin >> x;
		sum= upper_bound(a, a+n, x) - a;
		cout << sum << endl;
	}
	return 0;
}