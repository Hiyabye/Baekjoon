#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k, p; cin >> n >> k >> p;
  vector<int> v(n*k);
  for (int i=0; i<n*k; i++) cin >> v[i];

  int ans = n;
  for (int i=0; i<n; i++) {
    int cnt = 0;
    for (int j=0; j<k; j++) {
      if (v[i*k+j] == 0) cnt++;
    }
    if (cnt >= p) ans--;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}