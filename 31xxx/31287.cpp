#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n, k; cin >> n >> k;
  string s; cin >> s;

  int y = 0, x = 0;
  for (int i=0; i<n && i<k; i++) {
    for (char c : s) {
      if (c == 'U') y++;
      else if (c == 'D') y--;
      else if (c == 'L') x--;
      else if (c == 'R') x++;
      if (y == 0 && x == 0) return true;
    }
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}