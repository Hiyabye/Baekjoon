#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  long long n, d; cin >> n >> d;
  vector<long long> x(n);
  for (int i=0; i<n; i++) cin >> x[i];

  long long ans = d;
  for (int i=n-1; i>=0; i--) ans -= ans % x[i];
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}