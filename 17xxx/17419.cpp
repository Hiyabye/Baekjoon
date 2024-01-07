#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string k; cin >> k;

  int ans = 0;
  for (char c : k) ans += c - '0';
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}