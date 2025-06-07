#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  vector<long long> a(n); a[n-1] = 1;
  for (int i=n-2; i>=0; i--) {
    a[i] = min(a[i+1]+1, v[i]);
  }
  cout << accumulate(a.begin(), a.end(), 0LL);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}