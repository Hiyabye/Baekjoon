#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  int sum = 0;
  for (int i=0; i<16; i++) {
    if (i & 1) sum += s[i] - '0';
    else sum += 2 * (s[i] - '0') / 10 + 2 * (s[i] - '0') % 10;
  }
  return sum % 10 == 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "T" : "F") << "\n";
  return 0;
}