#include <iostream>
#include <string>
using namespace std;

inline bool check(const string &s) {
  int sum = 0;
  for (int i=0; i<10; i++) sum += (10-i) * (s[i] == 'X' ? 10 : s[i]-'0');
  return sum % 11 == 0;
}

void solve(void) {
  string s; cin >> s;
  int idx = s.find('?');

  for (char c='0'; c<='9'; c++) {
    s[idx] = c;
    if (check(s)) { cout << c; return; }
  }
  if (idx == 9) {
    s[idx] = 'X';
    if (check(s)) { cout << 'X'; return; }
  }
  cout << -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}