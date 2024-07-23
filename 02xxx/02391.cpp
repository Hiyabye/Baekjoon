#include <iostream>
#include <string>
using namespace std;

inline int calc(const string &a, const string &b) {
  int ret = 0;
  for (int i=0; i<a.length(); i++) {
    if (a[i] != b[i]) ret++;
  }
  return ret;
}

void solve(void) {
  string s; cin >> s;
  int w; cin >> w;
  string ans; cin >> ans; w--;
  
  while (w--) {
    string t; cin >> t;
    if (calc(s, t) < calc(s, ans)) ans = t;
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