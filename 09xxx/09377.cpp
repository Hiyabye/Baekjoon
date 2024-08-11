#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool check(int n, const vector<string> &v) {
  for (int i=0; i<n; i++) {
    if (v[i].empty()) return true;
  }
  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      if (v[i] == v[j]) return true;
    }
  }
  return false;
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  while (true) {
    for (string &s : v) {
      s.erase(s.begin());
    }
    if (check(n, v)) break;
    ans++;
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}