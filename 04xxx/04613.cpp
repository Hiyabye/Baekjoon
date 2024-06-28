#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);
  if (s == "#") return false;

  int ans = 0;
  for (int i=0; i<s.length(); i++) {
    ans += (i+1) * (s[i] == ' ' ? 0 : s[i] - 'A' + 1);
  }
  cout << ans << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}