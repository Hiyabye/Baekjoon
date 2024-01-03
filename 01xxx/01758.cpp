#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end(), greater<int>());

  long long ans = 0;
  for (int i=0; i<n; i++) v[i] -= i;
  for (int i=0; i<n; i++) ans += (v[i] > 0 ? v[i] : 0);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}