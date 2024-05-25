#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k, s; cin >> n >> k >> s;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());

  for (int i=1; i<n; i++) a[i] += a[i-1];
  for (int i=0; i<n; i++) {
    if (a[i] < k * s) continue;
    cout << i + 1;
    return;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}