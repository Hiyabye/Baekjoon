#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> v(100);
  for (int i=0, cur=0; i<n; i++) {
    int a, b; cin >> a >> b;
    for (int j=cur; j<cur+a; j++) {
      v[j] = b;
    }
    cur += a;
  }

  int ans = 0;
  for (int i=0, cur=0; i<m; i++) {
    int a, b; cin >> a >> b;
    for (int j=cur; j<cur+a; j++) {
      ans = max(ans, b - v[j]);
    }
    cur += a;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}