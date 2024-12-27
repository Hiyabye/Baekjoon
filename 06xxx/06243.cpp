#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string a; cin >> a;
  if (a == "#") return false;

  int ans = 0;
  while (a != "0") {
    string b; int c; char d; cin >> b >> c >> d; cin.ignore();
    if (d == 'Y') ans += max(500, c);
    else if (d == 'B') ans += c + (c + 1) / 2;
    else ans += c * 2;
    cin >> a;
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}