#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int cur = 0;
  vector<int> ans;
  for (int i=0; i<n; i++) {
    if (a[i] <= cur) continue;
    ans.push_back(a[i]);
    cur = a[i];
  }

  cout << ans.size() << "\n";
  for (int x : ans) cout << x << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}