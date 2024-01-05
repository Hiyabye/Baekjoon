#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);
  if (s == "*") return false;
  for (int i=0; i<s.length(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] += 'a' - 'A';
    }
  }

  stringstream ss(s);
  string tmp;
  while (ss >> tmp) {
    if (tmp[0] != s[0]) {
      cout << "N\n";
      return true;
    }
  }
  cout << "Y\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}