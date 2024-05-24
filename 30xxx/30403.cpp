#include <iostream>
#include <string>
using namespace std;

inline bool a(const string &s) {
  return s.find('r') != string::npos &&
         s.find('o') != string::npos &&
         s.find('y') != string::npos &&
         s.find('g') != string::npos &&
         s.find('b') != string::npos &&
         s.find('i') != string::npos &&
         s.find('v') != string::npos;
}

inline bool b(const string &s) {
  return s.find("R") != string::npos &&
         s.find("O") != string::npos &&
         s.find("Y") != string::npos &&
         s.find("G") != string::npos &&
         s.find("B") != string::npos &&
         s.find("I") != string::npos &&
         s.find("V") != string::npos;
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  cout << (a(s) ? (b(s) ? "YeS" : "yes") : (b(s) ? "YES" : "NO!"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}