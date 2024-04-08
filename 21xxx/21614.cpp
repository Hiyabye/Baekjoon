#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  bool left = false;
  while (s != "99999") {
    int sum = (s[0] - '0') + (s[1] - '0');
    left = sum & 1 ? true : (sum ? false : left);
    cout << (left ? "left" : "right") << " " << s.substr(2) << "\n";
    cin >> s;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}