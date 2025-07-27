#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int ans = 0, a = 0, b = 0;
  for (char c : s) {
    if (c == 'L') {
      a++;
    } else if (c == 'R') {
      if (a == 0) break;
      ans++; a--;
    } else if (c == 'S') {
      b++;
    } else if (c == 'K') {
      if (b == 0) break;
      ans++; b--;
    } else {
      ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}