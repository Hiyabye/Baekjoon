#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> w(n);
  for (int i=0; i<n; i++) cin >> w[i];
  sort(w.begin(), w.end());

  int ans = 0;
  for (int i=0, j=n-1; i<j;) {
    while (i < j && w[i] + w[j] > k) j--;
    if (i++ < j--) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}