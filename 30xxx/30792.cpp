#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int g; cin >> g;
  vector<int> v(n-1);
  for (int i=0; i<n-1; i++) cin >> v[i];

  int ans = 1;
  for (int x : v) if (g < x) ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}