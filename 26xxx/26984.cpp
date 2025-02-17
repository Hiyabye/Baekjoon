#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool check(string s, int m, const vector<string> &a) {
  for (int i=0; i<m; i++) {
    if (a[i].find(s) != string::npos) return true;
  }
  return false;
}

void solve(void) {
  int m, n; cin >> m >> n; cin.ignore();
  vector<string> a(m), b(n);
  for (int i=0; i<m; i++) getline(cin, a[i]);
  for (int i=0; i<n; i++) getline(cin, b[i]);

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (check(b[i], m, a)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}