#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> f(n);
  for (int i=0; i<n; i++) cin >> f[i];

  long long k = accumulate(f.begin(), f.end(), 0LL) / 2;
  for (int i=0; i<n; i++) {
    if (f[i] == k) continue;
    cout << f[i] << " ";
  }
  cout << k;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}