#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int cur = 1;
  for (int x : v) {
    while (cur < x) cout << cur++ << "\n";
    cur++;
  }
  if (v.back() == n) cout << "good job";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}