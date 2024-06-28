#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool solve(void) {
  char c;
  cin >> c;
  if (c == '#') return false;
  string s;
  getline(cin, s);

  int cnt = 0;
  for (int i=0; i<s.length(); i++) {
    if (tolower(s[i]) == tolower(c)) cnt++;
  }
  cout << c << " " << cnt << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}