#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 1e9, lion = 0, cnt = 1;
  for (int l=0, r=0; r<n; r++, cnt++) {
    if (v[r] == 1) lion++;
    if (lion == k) {
      while (l < r && v[l] == 2) l++, cnt--;
      ans = min(ans, cnt);
      l++; cnt--; lion--;
    }
  }
  cout << (ans == 1e9 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}