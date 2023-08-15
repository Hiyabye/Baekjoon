#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i=0; i<n; i++) cin >> arr[i];

  vector<int> a(n, 1);
  for (int i=0; i<n; i++) {
    for (int j=0; j<i; j++) {
      if (arr[j] < arr[i]) a[i] = max(a[i], a[j]+1);
    }
  }

  vector<int> b(n, 1);
  for (int i=n-1; i>=0; i--) {
    for (int j=n-1; j>i; j--) {
      if (arr[j] < arr[i]) b[i] = max(b[i], b[j]+1);
    }
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans = max(ans, a[i]+b[i]-1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}