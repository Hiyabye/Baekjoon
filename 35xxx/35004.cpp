#include <iostream>
#include <string>
using namespace std;

inline int calc(int n) {
  string s = "";
  while (n > 0) {
    s += to_string(n & 1);
    n >>= 1;
  }
  return stoi(s, nullptr, 2);
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n > 0) {
    n = calc(n) - 1;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}