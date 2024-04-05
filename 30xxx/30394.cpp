#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, x; cin >> n;
  vector<int> y(n);
  for (int i=0; i<n; i++) cin >> x >> y[i];

  cout << *max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}