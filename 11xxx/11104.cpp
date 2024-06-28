#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  int ans = 0;
  for (int i=0; i<24; i++) {
    ans <<= 1;
    ans += s[i] - '0';
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  while (n--) {
    solve();
  }
  return 0;
}