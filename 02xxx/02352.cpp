#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  vector<int> lis;
  for (int i=0; i<n; i++) {
    auto it = lower_bound(lis.begin(), lis.end(), a[i]);
    if (it == lis.end()) {
      lis.push_back(a[i]);
    } else {
      *it = a[i];
    }
  }
  cout << lis.size() << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}