#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  int ans = 1;
  for (int i=0; i<n; i++) {
    int cnt = 1;
    for (int j=1; j<5; j++) {
      if (i + j >= n) break;
      int diff = v[i+j] - v[i];
      if (0 < diff && diff < 5) cnt++;
    }
    ans = max(ans, cnt);
  }
  cout << 5 - min(ans, 5);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}