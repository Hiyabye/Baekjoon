#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  int ans = 0;
  for (int i=8; i<s.length(); i++) {
    if (s.substr(i-8, 9) == "certainly") ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}