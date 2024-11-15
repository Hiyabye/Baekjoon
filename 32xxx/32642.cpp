#include <iostream>
using namespace std;

void solve(void) {
	int n; cin >> n;
	
	long long ans = 0, cur = 0;
	while (n--) {
		int x; cin >> x;
		cur += x == 1 ? 1 : -1;
		ans += cur;
	}
	cout << ans;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	solve();
	return 0;
}
