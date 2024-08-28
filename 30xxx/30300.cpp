#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

inline int calc(int n, vector<int> a, int mask) {
  unordered_set<int> s;
  for (int i=0; i<n; i++) s.insert(a[i] & mask);
  for (int i=0; i<n; i++) if (s.find(i) == s.end()) return i;
  return n;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0, mx = 0;
  for (int i=0; i<31; i++) {
    int mask = (1 << i) - 1;
    int cnt = calc(n, a, mask);
    if (cnt > mx) ans = mask, mx = cnt;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}