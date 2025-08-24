#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline int calc(int k, const string &a, const string &b) {
  for (int i=k; i>0; i--) {
    if (a.substr(k-i) == b.substr(0, i)) return k-i;
  }
  return k;
}

void solve(void) {
  int k, w; cin >> k >> w;
  vector<string> v(w);
  for (int i=0; i<w; i++) cin >> v[i];

  int ans = k;
  for (int i=1; i<w; i++) {
    ans += calc(k, v[i-1], v[i]);
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}