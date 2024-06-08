#include <iostream>
#include <string>
using namespace std;

inline int calc(char c) {
  return (c == 'C' || c == 'F' || c == 'G') - (c == 'A' || c == 'D' || c == 'E');
}

bool solve(void) {
  string s; cin >> s;

  int ans = calc(s[0]);
  for (int i=1; i<s.length(); i++) {
    if (s[i-1] == '|') ans += calc(s[i]);
  }
  return ans == 0 ? s.back() == 'C' : ans > 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "C-major" : "A-minor");
  return 0;
}