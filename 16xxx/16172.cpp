#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  string k; cin >> k;

  string t;
  for (char c : s) {
    if (c >= '0' && c <= '9') continue;
    t += c;
  }
  cout << (t.find(k) != string::npos);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}