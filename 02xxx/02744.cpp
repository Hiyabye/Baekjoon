#include <iostream>
using namespace std;

inline char change(char c) {
  return (c ^ 32);
}

void solve(void) {
  string s; cin >> s;

  for (char c : s) cout << change(c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}