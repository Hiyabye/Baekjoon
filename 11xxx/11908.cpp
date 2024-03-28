#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> c(n);
  for (int i=0; i<n; i++) cin >> c[i];

  cout << accumulate(c.begin(), c.end(), 0) - *max_element(c.begin(), c.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}