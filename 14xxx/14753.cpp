#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  if (v[0]*v[1] <= 0) cout << max(v[n-1]*v[n-2], v[n-1]*v[n-2]*v[n-3]);
  else cout << max({v[0]*v[1], v[0]*v[1]*v[n-1], v[n-1]*v[n-2], v[n-1]*v[n-2]*v[n-3]});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}