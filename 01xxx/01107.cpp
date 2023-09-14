#include <bits/stdc++.h>
using namespace std;

bool find(int n, int m) {
  if (n == 0) {
    if (m == 0) return true;
    else return false;
  }
  while (n > 0) {
    if (n % 10 == m) return true;
    n /= 10;
  }
  return false;
}

void solve(void) {
  int n; cin >> n;
  int m; cin >> m;
  vector<int> broken(m);
  for (int i=0; i<m; i++) cin >> broken[i];

  int ans = abs(n-100);
  for (int i=0; i<=999999; i++) {
    bool flag = true;
    for (int j=0; j<m; j++) {
      if (find(i, broken[j])) {
        flag = false;
        break;
      }
    }
    if (!flag) continue;
    int cnt = abs(n-i) + to_string(i).length();
    ans = min(ans, cnt);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}