#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

inline bool check(const vector<int> &v) {
  for (int i=0; i<10; i++) {
    if (v[i] == 0) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<int> b(n), d(n);
  for (int i=0; i<n; i++) cin >> b[i] >> d[i], d[i]--;

  vector<int> ans(10, 0);
  for (int i=0; i<n; i++) {
    ans[d[i]] = max(ans[d[i]], b[i]);
  }

  if (check(ans)) {
    cout << accumulate(ans.begin(), ans.end(), 0) << "\n";
  } else {
    cout << "MOREPROBLEMS\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}