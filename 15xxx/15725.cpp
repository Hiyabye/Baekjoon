#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  if (s.find("x") == string::npos) {
    cout << 0;
  } else if (s.find("x") == 0) {
    cout << 1;
  } else if (s.find("x") == 1 && s[0] == '-') {
    cout << -1;
  } else {
    cout << s.substr(0, s.find("x"));
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}