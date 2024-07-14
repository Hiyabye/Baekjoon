#include <cmath>
#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; int n; cin >> s >> n; n--;

  return abs(s[0]-n%8) % 2 == abs(s[1]-n/8) % 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}