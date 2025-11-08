#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline int calc(const string &s, const string &t) {
  int ret = 0;
  for (int i=0; i<4; i++) {
    if (s[i] != t[i]) ret++;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<string> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  vector<int> p(n);
  for (int i=0; i<n; i++) p[i] = i;

  int ans = 0;
  do {
    int cur = 0;
    for (int i=0; i<n; i++) cur += calc(a[i], b[p[i]]);
    ans = max(ans, cur);
  } while (next_permutation(p.begin(), p.end()));
  
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}