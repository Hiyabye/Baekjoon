#include <iostream>
#include <string>
using namespace std;

inline bool ok(string s, char c) {
  return s.find(c) != string::npos;
}

bool solve(void) {
  string s; cin >> s;

  return ok(s, 'M') && ok(s, 'O') && ok(s, 'B') && ok(s, 'I') && ok(s, 'S');
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}