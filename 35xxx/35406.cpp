#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  s += "xxxx";

  int ans = 0;
  for (int i=0; i<s.length()-4; i++) {
    if (s.substr(i, 2) == "ha") ans++;
    if (s.substr(i, 5) == "boooo") ans--;
    if (s.substr(i, 5) == "bravo") ans += 3;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}