#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(vector<int> a, int b, int c, int d, int e) {
  for (int i=1; i<b; i++) a[0] *= a[i];
  for (int i=b+1; i<b+c; i++) a[b] *= a[i];
  for (int i=b+c+1; i<b+c+d; i++) a[b+c] *= a[i];
  for (int i=b+c+d+1; i<b+c+d+e; i++) a[b+c+d] *= a[i];
  return a[0] + a[b] + a[b+c] + a[b+c+d];
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0;
  for (int b=1; b<=n-3; b++) for (int c=1; b+c<=n-2; c++) for (int d=1; b+c+d<=n-1; d++) {
    int e = n - b - c - d;
    ans = max(ans, calc(a, b, c, d, e));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}