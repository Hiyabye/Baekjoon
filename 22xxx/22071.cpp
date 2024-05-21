#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, l; cin >> n >> l;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end(), greater<int>());

  int ans = 0;
  for (int i=0; i<l; i++) {
    ans += a[i] - b[i];
  }
  return ans > 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}