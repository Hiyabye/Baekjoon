#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

bool solve(void) {
  int k; cin >> k;
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  return accumulate(a.begin(), a.end(), 0) - *min_element(a.begin(), a.end()) >= k;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}