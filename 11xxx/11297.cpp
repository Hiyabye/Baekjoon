#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int a, b, c; cin >> a >> b >> c; cin.ignore();
  if (a == 0 && b == 0 && c == 0) return false;

  int s = (a + b + c) % 25 + 1;
  string t; getline(cin, t);

  for (char &c : t) {
    if (c < 'a' || c > 'z') continue;
    c = (c - 'a' + 26 - s) % 26 + 'a';
  }
  cout << t << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}