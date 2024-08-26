#include <cmath>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;
  string t; cin >> t;

  int a = 0, b = 0;
  for (int i=0; i<n; i++) {
    a += (s[i] == 'W') - (t[i] == 'W');
    b += (s[i] != t[i]);
  }
  cout << (abs(a) + b) / 2 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}