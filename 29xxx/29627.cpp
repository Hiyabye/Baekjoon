#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline int time(const string &s) {
  return stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3, 2));
}

void solve(void) {
  int n, x, y; cin >> n >> x >> y;
  vector<int> v(n);
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    v[i] = time(s);
  }
  v.push_back(time("23:59"));

  double ans = 100;
  for (int i=0; i<n; i++) {
    if (i & 1) ans = min(100.0, ans + 100.0 * (v[i+1] - v[i]) / y);
    else ans = max(0.0, ans - 100.0 * (v[i+1] - v[i]) / x);
  }
  cout << fixed << setprecision(4) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}