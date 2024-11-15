#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
	int n, k, t; cin >> n >> k >> t;
	vector<int> d(n);
	for (int i=0; i<n; i++) cin >> d[i];
	
	int ans = 0;
	for (int i=0; i<n; i++) {
		if (t > k) t = t + d[i] - abs(t - k);
		else if (t < k) t = t + d[i] + abs(t - k);
		else t = t + d[i];
		ans += abs(t - k);
	}
	cout << ans;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	solve();
	return 0;
}
