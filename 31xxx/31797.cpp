#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<pair<int, int>> h(2*m);
  for (int i=0; i<m; i++) {
    int a, b; cin >> a >> b;
    h[2*i] = {a, i+1};
    h[2*i+1] = {b, i+1};
  }
  sort(h.begin(), h.end());

  cout << h[(n-1)%(2*m)].second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}