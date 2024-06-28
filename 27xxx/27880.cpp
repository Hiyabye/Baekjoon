#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; int x;

  int ans = 0;
  while (cin >> s >> x) ans += (s == "Stair" ? 17 : 21) * x;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}