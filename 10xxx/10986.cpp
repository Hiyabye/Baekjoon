#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;
  vector<int> a(n, 0);
  for (int i=0; i<n; i++) {
    cin >> a[i];
    a[i] %= m;
  }

  for (int i=1; i<n; i++) {
    a[i] = (a[i-1]+a[i]) % m;
  }

  vector<long long> cnt(m, 0);
  for (int i=0; i<n; i++) {
    cnt[a[i]]++;
  }

  long long ans = cnt[0];
  for (int i=0; i<m; i++) {
    ans += cnt[i] * (cnt[i]-1) / 2;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}