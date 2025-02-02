#include <iostream>
#include <string>
using namespace std;

inline bool check(int n, const string &s, int k) {
  for (int i=0; i<n; i++) {
    if (s[i] != s[i % k]) return false;
  }
  return true;
}

bool solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  for (int i=1; i<n; i++) {
    if (n % i) continue;
    if (check(n, s, i)) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}