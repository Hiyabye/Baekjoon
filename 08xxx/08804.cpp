#include <iostream>
#include <string>
using namespace std;

int solve(void) {
  string s; cin >> s;

  for (int i=0; i<s.length()/2; i++) {
    if (s[i] != s[s.length()-i-1]) return 2;
  }
  return 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) cout << solve() << "\n";
  return 0;
}