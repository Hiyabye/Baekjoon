#include <iostream>
#include <string>
using namespace std;

bool check(string s, string t) {
  int a = s.length(), b = t.length();
  if (a > b) return false;

  for (int i=0; i<a; i++) {
    if (s[i] != t[b-a+i]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;

  cout << (check(to_string(n), to_string(n*n)) ? "YES" : "NO") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}