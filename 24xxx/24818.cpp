#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n+1, 0);
  for (int i=1; i<=n; i++) cin >> v[i];
  
  for (int i=2; i<=n; i++) v[i] += v[i-1];
  if (v[n] % 3) {
    cout << -1;
    return;
  }

  int a = upper_bound(v.begin(), v.end(), v[n] / 3) - v.begin();
  int b = upper_bound(v.begin(), v.end(), v[n] / 3 * 2) - v.begin();
  int c = lower_bound(v.begin(), v.end(), v[n] / 3) - v.begin();
  int d = lower_bound(v.begin(), v.end(), v[n] / 3 * 2) - v.begin();

  if (a-c == 1 && b-d == 1) cout << c << " " << d;
  else cout << -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}