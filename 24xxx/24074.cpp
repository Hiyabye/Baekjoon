#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int max_idx = distance(a.begin(), max_element(a.begin(), a.end()));
  cout << accumulate(a.begin(), a.begin() + max_idx, 0) << "\n";
  cout << accumulate(a.begin() + max_idx + 1, a.end(), 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}