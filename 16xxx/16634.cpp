#include <iostream>
#include <string>
using namespace std;

void encode(const string &s) {
  char cur = s[0]; int cnt = 1;
  for (int i=1; i<s.length(); i++) {
    if (s[i] == cur) cnt++;
    else {
      cout << cur << cnt;
      cur = s[i]; cnt = 1;
    }
  }
  if (cnt) cout << cur << cnt;
}

void decode(const string &s) {
  for (int i=0; i<s.length(); i+=2) {
    for (int j=0; j<s[i+1]-'0'; j++) cout << s[i];
  }
}

void solve(void) {
  char c; string s; cin >> c >> s;

  (c == 'E' ? encode : decode)(s);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}