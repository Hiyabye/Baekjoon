#include <iostream>
#include <string>
using namespace std;

inline bool vowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void solve(void) {
  string w; cin >> w;

  int ans = 0;
  for (char c : w) {
    ans += vowel(c);
  }
  cout << "The number of vowels in " << w << " is " << ans << ".\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}