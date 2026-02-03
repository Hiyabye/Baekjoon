#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int mx = 0;
  while (n--) {
    string s; cin >> s;
    if (s != "/") {
      cout << s << "\n";
      mx = max(mx, stoi(s));
    } else {
      cout << (mx / 10 + 1) * 10 << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}