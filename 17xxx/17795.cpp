#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n = s.length();

  if (n == 1)           cout << s;
  else if (s[1] >= '5') cout << (s[0] - '0' + 1);
  else                  cout << s[0];
  while (--n)           cout << 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}