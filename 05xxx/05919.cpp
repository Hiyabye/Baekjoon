#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  int avg = accumulate(v.begin(), v.end(), 0) / n;
  for (int i=0; i<n; i++) ans += abs(v[i] - avg);
  cout << ans / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}