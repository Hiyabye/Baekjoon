#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  while (s.find("PS4") != string::npos || s.find("PS5") != string::npos) {
    s.replace(s.find(s.find("PS4") != string::npos ? "PS4" : "PS5"), 3, "PS");
  }
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}