#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline bool check(int n, const vector<int> &a, int x) {
	int l = 0, r = n-1;	
	while (l < r) {
		int sum = a[l] + a[r];
		if (sum < a[x]) l++;
		else if (sum > a[x]) r--;
		else if (l == x) l++;
		else if (r == x) r--;
		else return true;
	}
	return false;
}

void solve(void) {
	int n; cin >> n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	
	int ans = 0;
	for (int i=0; i<n; i++) {
		if (check(n, a, i)) ans++;
	}
	cout << ans;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	solve();
	return 0;
}