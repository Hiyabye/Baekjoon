#include <bits/stdc++.h>
using namespace std;

void solve(int t) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());

  int ans = a[0] - a[1];
  for (int i=1; i<n-1; i++) {
    ans = max(ans, a[i] - a[i+1]);
  }
  cout << "Class " << t << "\n";
  cout << "Max " << a[0] << ", Min " << a[n-1] << ", Largest gap " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  for (int i=1; i<=t; i++) {
    solve(i);
  }
  return 0;
}