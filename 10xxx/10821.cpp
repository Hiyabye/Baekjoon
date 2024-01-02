#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  int ans = 0;
  for (auto i=0; i<s.length(); i++) {
    if (s[i] == ',') ans++;
  }
  cout << ans + 1 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}