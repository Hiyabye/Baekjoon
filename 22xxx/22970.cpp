#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 1;
  for (int i=0; i<n; i++) {
    int j = i;
    while (j+1 < n && a[j] < a[j+1]) j++;
    int k = j;
    while (k+1 < n && a[k] > a[k+1]) k++;
    ans = max(ans, k-i+1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}