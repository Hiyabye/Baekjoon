#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  long long n, m; cin >> n >> m;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  long long ans = 1;
  for (int i=0; i<n; i++) {
    ans = (ans * a[i]) % m;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}