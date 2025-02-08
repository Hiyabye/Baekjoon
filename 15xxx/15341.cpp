#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);
  if (s == "0000 0000 0000 0000") return false;
  s.erase(4, 1); s.erase(8, 1); s.erase(12, 1);

  int ans = 0;
  for (int i=0; i<16; i++) {
    if (i & 1) {
      ans += s[i] - '0';
    } else {
      int x = (s[i] - '0') * 2;
      ans += x > 9 ? x - 9 : x;
    }
  }
  cout << (ans % 10 == 0 ? "Yes" : "No") << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}