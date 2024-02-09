#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int t; cin >> t;

  string ans = "";
  while (t > 0) {
    ans = to_string(t % 9) + ans;
    t /= 9;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}