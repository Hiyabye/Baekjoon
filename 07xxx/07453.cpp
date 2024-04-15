#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n), c(n), d(n);
  for (int i=0; i<n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

  vector<int> ab(n*n), cd(n*n);
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      ab[i*n+j] = a[i] + b[j];
      cd[i*n+j] = c[i] + d[j];
    }
  }
  sort(ab.begin(), ab.end());
  sort(cd.begin(), cd.end());

  long long ans = 0;
  for (int l=0, r=n*n-1; l<n*n && r>=0; ) {
    int sum = ab[l] + cd[r];
    if (sum == 0) {
      long long p = 1, q = 1;
      l++; r--;
      while (l < n*n && ab[l] == ab[l-1]) { l++; p++; }
      while (r >= 0 && cd[r] == cd[r+1]) { r--; q++; }
      ans += p * q;
    } else if (sum < 0) {
      l++;
    } else {
      r--;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}