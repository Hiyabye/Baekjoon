#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, l; cin >> n >> l;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  int ans = 0;
  for (int i=0; i<n; i++) {
    int j = i;
    while (j+1 < n && v[j+1] - v[i] + 1 <= l) j++;
    i = j;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}