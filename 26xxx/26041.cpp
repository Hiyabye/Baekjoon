#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void solve(void) {
  string a; getline(cin, a);
  string b; cin >> b;

  int ans = 0;
  string s;
  stringstream ss(a);
  while (ss >> s) {
    if (s == b) continue;
    if (s.substr(0, b.length()) == b) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}