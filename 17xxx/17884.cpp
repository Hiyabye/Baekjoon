#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> v(n-1);
  for (int i=0; i<n-1; i++) cin >> v[i].first, v[i].second = i;
  sort(v.begin(), v.end());

  cout << "1";
  for (int i=0; i<n-1; i++) {
    cout << " " << v[i].second + 2;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}