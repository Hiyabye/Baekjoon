#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  if (s.find("+") == string::npos) return false;

  string a = s.substr(0, s.find("+"));
  string b = s.substr(s.find("+") + 1, s.size() - s.find("+") - 1);

  for (char c : a) if (c < '0' || c > '9') return false;
  for (char c : b) if (c < '0' || c > '9') return false;
  return !a.empty() && a[0] != '0' && b[0] != '0' && a == b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "CUTE" : "No Money");
  return 0;
}