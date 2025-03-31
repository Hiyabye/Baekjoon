#include <iostream>
#include <vector>
using namespace std;

inline bool check(int n, int k, const vector<int> &cur, const vector<int> &s) {
  for (int i=0; i<n; i++) {
    if (cur[i] + s[i] > k) return false;
  }
  return true;
}

void solve(void) {
  int n, d, k; cin >> n >> d >> k;
  vector<int> s(n);
  for (int i=0; i<n; i++) cin >> s[i];

  int ans = 0;
  vector<int> cur(n, 0);
  while (d--) {
    if (!check(n, k, cur, s)) {
      ans++;
      for (int i=0; i<n; i++) cur[i] = 0;
    }
    for (int i=0; i<n; i++) cur[i] += s[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}