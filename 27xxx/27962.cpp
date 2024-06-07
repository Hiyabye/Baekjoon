#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  for (int i=1; i<=n; i++) {
    bool flag = false;
    for (int j=0; j<i; j++) {
      if (s[j] != s[n-i+j]) {
        if (flag) { flag = false; break; }
        else flag = true;
      }
    }
    if (flag) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}