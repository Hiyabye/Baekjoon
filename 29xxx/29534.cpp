#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  if (s.length() > n) {
    cout << "Impossible";
    return;
  }

  int ans = 0;
  for (char c : s) ans += c-'a'+1;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}