#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  for (int i=n-1; i>=0 && k>0; i--) {
    int mx = *max_element(a.begin(), a.begin()+i+1);
    if (a[i] == mx) continue;
    int j = find(a.begin(), a.begin()+i+1, mx) - a.begin();
    swap(a[i], a[j]); k--;
    if (k == 0) cout << min(a[i], a[j]) << " " << max(a[i], a[j]);
  }
  if (k > 0) cout << "-1";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}