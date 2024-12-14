#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int a; cin >> a;
  int b; cin >> b;
  int c; cin >> c;

  string ans = to_string((a & 15) << 8 | (b & 15) << 4 | (c & 15));
  while (ans.length() < 4) ans = '0' + ans;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}