#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  string ans = "";
  do {
    ans += (a % 10 <= 2 && b % 10 <= 2) || (a % 10 >= 7 && b % 10 >= 7) ? '0' : '9';
    a /= 10, b /= 10;
  } while (a > 0 || b > 0);

  reverse(ans.begin(), ans.end());
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}