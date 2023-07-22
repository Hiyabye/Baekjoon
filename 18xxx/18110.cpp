#include <bits/stdc++.h>

using namespace std;

void solve(void) {
  int n;
  cin >> n;

  if (n == 0) {
    cout << "0";
    return;
  }

  vector<int> a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  int k = round(n * 0.15);
  double sum = 0;
  for (int i=k; i<n-k; i++) {
    sum += a[i];
  }
  int ans = round(sum / (n-2*k));
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}