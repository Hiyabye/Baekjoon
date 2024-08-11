#include <iostream>
#include <string>
using namespace std;

int solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  for (int i=1; i<=n-1; i++) {
    if (i < 10) {
      if (stoi(s.substr(0, 1)) != i) return i;
      s.erase(0, 1);
    } else {
      if (stoi(s.substr(0, 2)) != i) return i;
      s.erase(0, 2);
    }
  }
  return n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}