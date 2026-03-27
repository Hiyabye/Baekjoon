#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int x = 0, y = 0;
  for (char c : s) {
    x += (c == 'S');
    y += (c == 'L');
  }

  while (x--) cout << "SciCom";
  while (y--) cout << "Love";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
