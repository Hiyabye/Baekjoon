#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, t; cin >> n >> t;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int sum = 0, ans = 0;
  for (int i=0; i<n; i++) {
    sum += v[i];
    if (sum > t) break;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}