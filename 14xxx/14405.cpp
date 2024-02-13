#include <iostream>
#include <string>
using namespace std;

bool check(string s) {
  if (s.empty()) return true;
  if (s.substr(0, 2) == "pi" && check(s.substr(2))) return true;
  if (s.substr(0, 2) == "ka" && check(s.substr(2))) return true;
  if (s.substr(0, 3) == "chu" && check(s.substr(3))) return true;
  return false;
}

void solve(void) {
  string s; cin >> s;

  cout << (check(s) ? "YES" : "NO");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}