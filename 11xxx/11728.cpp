#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> v(n+m);
  for (int i=0; i<n+m; i++) cin >> v[i];
  sort(v.begin(), v.end());

  for (int i=0; i<n+m; i++) cout << v[i] << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}