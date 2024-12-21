#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  if (s == "#") return false;

  int a = 0, b = 0, x = 0, y = 0;
  for (char c : s) {
    if (c == 'A') x++;
    else y++;
    if (x >= 4 && x - y >= 2) {
      a++;
      x = y = 0;
    } else if (y >= 4 && y - x >= 2) {
      b++;
      x = y = 0;
    }
  }
  cout << "A " << a << " B " << b << "\n";
  
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}