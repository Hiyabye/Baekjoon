#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> d(n);
  for (int i=0; i<n; i++) cin >> d[i];

  int ans = 1, cur = d[0];
  for (int i=1; i<n; i++) {
    if (d[i] <= cur) continue;
    ans++; cur = d[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}