#include <iostream>
#include <string>
using namespace std;

inline int rev(const string &s) {
  int ret = 0;
  for (int i=s.length()-1; i>=0; i--) {
    ret = ret * 10 + s[i] - '0';
  }
  return ret;
}

bool solve(void) {
  string s; cin >> s;
  if (s == "0+0=0") return false;

  int a = rev(s.substr(0, s.find('+')));
  int b = rev(s.substr(s.find('+') + 1, s.find('=') - s.find('+') - 1));
  int c = rev(s.substr(s.find('=') + 1));

  cout << (a + b == c ? "True" : "False") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  cout << "True";
  return 0;
}