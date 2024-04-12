#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<string> s(n);
  for (int i=0; i<n; i++) cin >> s[i];
  int m; cin >> m;
  vector<string> a(m);
  for (int i=0; i<m; i++) cin >> a[i];

  int idx = find(s.begin(), s.end(), "?") - s.begin();
  for (int i=0; i<m; i++) {
    if (find(s.begin(), s.end(), a[i]) != s.end()) continue;
    if (idx > 0 && a[i].front() != s[idx-1].back()) continue;
    if (idx < n-1 && a[i].back() != s[idx+1].front()) continue;
    cout << a[i];
    break;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}