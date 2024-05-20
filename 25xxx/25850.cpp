#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int p; cin >> p;

  vector<pair<int, int>> v;
  for (int i=0; i<p; i++) {
    int c; cin >> c;
    for (int j=0; j<c; j++) {
      int x; cin >> x;
      v.push_back({x, i});
    }
  }
  sort(v.begin(), v.end());

  for (int i=0; i<v.size(); i++) {
    cout << (char)('A' + v[i].second);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}