#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  int ans = 0;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    if (count(s.begin(), s.end(), 'O') > m / 2) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}