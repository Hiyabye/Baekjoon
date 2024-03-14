#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int ans = 0;
  for (char c : s) {
    ans += (c == 'j') * 2 + (c == 'o') + (c == 'i') * 2;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}