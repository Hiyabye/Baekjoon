#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int b = 0;
  for (int i=0; i<n; i++) b ^= a[i];

  cout << (b ? 0 : accumulate(a.begin(), a.end(), 0) - *min_element(a.begin(), a.end()));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}