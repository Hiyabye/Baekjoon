#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int query(int n, const string &s) {
  int ret = 0;
  for (int i=0; i<n-1; i++) {
    int cur = 0;
    for (int j=i; j>=0 && 2*i-j+1<n; j--) {
      if (s[j] == s[2*i-j+1]) cur++;
    }
    ret = max(ret, cur);
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int q; cin >> q;
  while (q--) {
    int l, r; cin >> l >> r; l--; r--;
    cout << query(r-l+1, s.substr(l, r-l+1)) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}