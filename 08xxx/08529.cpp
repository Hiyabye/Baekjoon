#include <iostream>
#include <set>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  set<vector<bool>> ans;
  for (int i=0; i<n; i++) for (int j=i; j<n; j++) {
    vector<bool> v(501, false);
    for (int k=i; k<=j; k++) v[a[k]] = true;
    ans.insert(v);
  }
  cout << ans.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}