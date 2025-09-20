#include <iostream>
#include <string>
using namespace std;

inline string base26(int x) {
  string ret = "";
  while (x--) {
    ret = (char)('A' + x % 26) + ret;
    x /= 26;
  }
  return ret;
}

bool solve(void) {
  string s; cin >> s;
  if (s == "R0C0") return false;

  int c = s.find('C');
  cout << base26(stoi(s.substr(c+1))) << stoi(s.substr(1, c-1)) << "\n";
  
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}