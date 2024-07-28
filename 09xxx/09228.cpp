#include <iostream>
#include <string>
using namespace std;

inline string calc(const string &s) {
  int sum = 0;
  for (int i=0; i<s.length(); i++) {
    sum += (s[i] - '0') * (s.length() - i + 1);
  }
  sum = (11 - sum % 11) % 11;
  return (sum == 10) ? "Rejected" : to_string(sum);
}

bool solve(void) {
  string s; cin >> s;
  if (s == "#") return false;

  cout << s << " -> " << calc(s) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}