#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> a(n+2); a[0] = 0; a[n+1] = 1440;
  for (int i=1; i<=n; i++) cin >> a[i];

  int ans = 0;
  for (int i=0; i<=n; i++) {
    ans += (a[i+1] - a[i]) / 120;
  }
  return ans > 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}