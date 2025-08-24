#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline bool check(int n, int k, const vector<int> &a, const vector<int> &b) {
  int cur = 500;
  for (int i=0; i<n; i++) {
    cur += a[b[i]] - k;
    if (cur < 500) return false;
  }
  return true;
}

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  vector<int> b(n);
  for (int i=0; i<n; i++) b[i] = i;

  int ans = 0;
  do {
    if (check(n, k, a, b)) ans++;
  } while (next_permutation(b.begin(), b.end()));

  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}