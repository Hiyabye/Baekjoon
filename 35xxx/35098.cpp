#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  string s; cin >> s;

  for (int i=1; i<n; i++) {
    if (s.substr(i, n-i) == s.substr(0, n-i)) {
      cout << s << s.substr(n-i) << "\n";
      return true;
    }
  }
  cout << s << s << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}