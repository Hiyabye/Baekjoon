#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string n; cin >> n;

  int ans = 0;
  for (char c : n) ans += c - '0';
  cout << ans % 3;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}