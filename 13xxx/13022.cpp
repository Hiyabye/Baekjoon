#include <iostream>
#include <string>
using namespace std;

inline string wolf(int n) {
  string ret = "";
  for (int i=0; i<n; i++) ret += "w";
  for (int i=0; i<n; i++) ret += "o";
  for (int i=0; i<n; i++) ret += "l";
  for (int i=0; i<n; i++) ret += "f";
  return ret;
}

bool solve(void) {
  string s; cin >> s;

  for (int i=1; i<=12; i++) {
    string p = wolf(i);
    if (s.length() < p.length()) break;
    while (s.find(p) != string::npos) s.replace(s.find(p), p.length(), ".");
  }

  for (int i=0; i<s.length(); i++) {
    if (s[i] != '.') return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}