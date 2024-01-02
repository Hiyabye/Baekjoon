#include <iostream>
#include <string>
using namespace std;

bool check(string &s) {
  int n = s.length();
  for (int i=0; i<n/2; i++) {
    if (s[i] != s[n-i-1]) return false;
  }
  return true;
}

void solve(void) {
  string s; cin >> s;

  int n = s.length();
  for (int i=0; i<n; i++) {
    string t = s.substr(i, n-i);
    if (check(t)) {
      cout << n+i;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}