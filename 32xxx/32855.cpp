#include <iostream>
#include <string>
using namespace std;

inline string a(const string &s, const string &t) {
  return stod(s) > stod(t) ? s : t;
}

inline string b(const string &s, const string &t) {
  int x1 = stoi(s.substr(0, s.find('.')));
  int y1 = stoi(s.substr(s.find('.') + 1));
  int x2 = stoi(t.substr(0, t.find('.')));
  int y2 = stoi(t.substr(t.find('.') + 1));
  return x1 > x2 || (x1 == x2 && y1 > y2) ? s : t;
}

void solve(void) {
  string s; cin >> s;
  string t; cin >> t;

  cout << (a(s, t) == b(s, t) ? a(s, t) : "-1");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}