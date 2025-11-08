#include <iostream>
#include <vector>
using namespace std;

inline bool check(const vector<int> &a, int l, int r) {
  for (int i=l+1; i<=r-1; i++) {
    if (a[i] <= a[l] || a[i] <= a[r]) return false;
  }
  return true;
}

void solve(void) {
  int t; cin >> t;
  vector<int> a(12);
  for (int i=0; i<12; i++) cin >> a[i];

  int ans = 0;
  for (int i=0; i<12; i++) for (int j=i+2; j<12; j++) {
    if (check(a, i, j)) ans++;
  }
  cout << t << " " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int p; cin >> p;
  while (p--) solve();
  return 0;
}