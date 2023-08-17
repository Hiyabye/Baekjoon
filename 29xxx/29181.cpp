#include <bits/stdc++.h>
using namespace std;

int check(vector<int> &a, int k) {
  int b = 0, c = 0;
  for (int i=0; i<a.size(); i++) {
    if (a[i] < k) b += k-a[i];
    else if (a[i] > k) c += a[i]-k;
  }
  return min(b, c) + abs(b-c);
}

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = accumulate(a.begin(), a.end(), 0);
  int start = *min_element(a.begin(), a.end()), end = *max_element(a.begin(), a.end());
  for (int i=start; i<=end; i++) ans = min(ans, check(a, i));
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}