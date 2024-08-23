#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, t; cin >> n >> t;
  vector<long long> a(n);
  for (int i=0; i<n; i++) {
    long long x, y; cin >> x >> y;
    a[i] = x + y * t;
  }

  vector<long long> lis;
  for (int i=n-1; i>=0; i--) {
    auto it = upper_bound(lis.begin(), lis.end(), a[i]);
    if (it == lis.end()) {
      lis.push_back(a[i]);
    } else {
      *it = a[i];
    }
  }
  cout << lis.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}