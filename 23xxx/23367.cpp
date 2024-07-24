#include <iostream>
#include <string>
using namespace std;

inline bool left(char c) {
  const string l = "qwertasdfgzxcvb";
  return l.find(c) != string::npos;
}

bool solve(void) {
  string s; cin >> s;

  for (int i=1; i<s.length(); i++) {
    if (left(s[i]) == left(s[i-1])) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "yes" : "no");
  return 0;
}