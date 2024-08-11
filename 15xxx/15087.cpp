#include <iostream>
#include <string>
using namespace std;

inline string calc(string s) {
  int x = 0;
  for (char c : s) x += c - 'A';
  for (char &c : s) c = (c - 'A' + x) % 26 + 'A';
  return s;
}

void solve(void) {
  string s; cin >> s;

  string a = calc(s.substr(0, s.length() / 2));
  string b = calc(s.substr(s.length() / 2));
  for (int i=0; i<a.length(); i++) {
    a[i] = (a[i] - 'A' + b[i] - 'A') % 26 + 'A';
  }
  cout << a;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}