#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int m; cin >> m;
  vector<long long> K(m), D(m), A(m);
  for (int i=0; i<m; i++) cin >> K[i] >> D[i] >> A[i];
  long long k, d, a; cin >> k >> d >> a;

  long long ans = 0;
  for (int i=0; i<m; i++) {
    long long sum = K[i] * k - D[i] * d + A[i] * a;
    if (sum > 0) ans += sum;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}