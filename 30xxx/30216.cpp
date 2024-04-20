#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool check(const vector<int> &v, int l, int r) {
  for (int i=l; i<r; i++) {
    if (v[i] >= v[i+1]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    for (int j=i; j<n; j++) {
      if (check(v, i, j)) ans = max(ans, j-i+1);
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}