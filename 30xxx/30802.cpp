#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(6);
  for (int i=0; i<6; i++) cin >> a[i];
  int t, p; cin >> t >> p;

  int ans = 0;
  for (int i=0; i<6; i++) ans += (a[i]+t-1) / t;
  cout << ans << "\n" << n / p << " " << n % p;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}