#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

inline int calc(char c, const string &f) {
  int ret = 26;
  for (char d : f) {
    ret = min({ret, abs(d-c), 26-abs(d-c)});
  }
  return ret;
}

void solve(int idx) {
  string s; cin >> s;
  string f; cin >> f;

  int ans = 0;
  for (char c : s) {
    ans += calc(c, f);
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}