#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int mx = 0, mn = 1e9;
  while (n--) {
    int x; cin >> x;
    mx = max(mx, x);
    mn = min(mn, x);
  }
  cout << max(0, mn - mx / 2);
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	solve();
	return 0;
}