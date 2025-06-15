#include <algorithm>
#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> h(n);
  for (int i=0; i<n; i++) cin >> h[i];
  sort(h.begin(), h.end(), greater<long long>());

  long long ans = 0;
  for (int i=0; i<n; i++) {
    ans = (ans + ans + h[i]) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}