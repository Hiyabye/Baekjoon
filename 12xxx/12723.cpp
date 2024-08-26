#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<long long> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i];
  for (int i=0; i<n; i++) cin >> y[i];
  sort(x.begin(), x.end());
  sort(y.begin(), y.end(), greater<long long>());

  long long ans = 0;
  for (int i=0; i<n; i++) {
    ans += x[i] * y[i];
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}