#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> f(n);
  for (int i=0; i<n; i++) cin >> f[i];

  long long sum = accumulate(f.begin(), f.end(), 0LL), cnt = 0;
  for (int i=0; i<n; i++) {
    if (f[i] == sum / 2) cnt++;
    else cout << f[i] << " ";
  }
  while (cnt--) cout << sum / 2 << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}