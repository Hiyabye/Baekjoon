#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (a[i] != k) continue;
    for (int j=0; j<k; j++) {
      if (i+j >= n || a[i+j] != k-j) break;
      if (j == k-1) ans++;
    }
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}