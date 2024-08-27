#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  return s.back() != '0';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? 'B' : 'E') << "\n";
  return 0;
}