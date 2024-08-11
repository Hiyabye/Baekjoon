#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n, m, k; cin >> n >> m >> k;
  string s; cin >> s;

  string t = s;
  for (int i=0; i<n; i++) {
    if (s[i] != 'R') continue;
    for (int j=max(0, i-k); j<=min(n-1, i+k); j++) t[j] = 'R';
  }
  return count(t.begin(), t.end(), 'R') <= m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}