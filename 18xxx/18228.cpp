#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int p = distance(a.begin(), find(a.begin(), a.end(), -1));
  cout << *min_element(a.begin(), a.begin() + p) + *min_element(a.begin() + p + 1, a.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}