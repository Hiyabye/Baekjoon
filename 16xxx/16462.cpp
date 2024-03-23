#include <iostream>
#include <string>
using namespace std;

int score(string q) {
  int ret = 0;
  for (char c : q) {
    ret = 10 * ret + (c == '6' || c == '0' ? 9 : c - '0');
  }
  return ret > 100 ? 100 : ret;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=0; i<n; i++) {
    string q; cin >> q;
    ans += score(q);
  }
  cout << (ans + n / 2) / n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}