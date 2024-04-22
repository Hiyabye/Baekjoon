#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  string f; cin >> f;

  for (int i=1; i<n; i++) {
    string s; cin >> s;
    if (s.front() != f.front()) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}