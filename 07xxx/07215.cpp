#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline bool check(int k, int s, const vector<int> &n) {
  for (int i=0; i<s; i++) {
    if (n[i] >= k) return true;
  }
  return false;
}

void solve(void) {
  int k, s; cin >> k >> s;
  vector<int> n(s);
  for (int i=0; i<s; i++) cin >> n[i];
  
  if (!check(k, s, n)) {
    cout << -1;
    return;
  }

  int ans = 1;
  for (int i=0; i<s; i++) {
    ans += min(n[i], k-1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}