#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int l, r, x; cin >> l >> r >> x;

  vector<int> v;
  for (int i=l; i<=r; i++) v.push_back(i | x);
  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());

  for (int i=0; i<v.size(); i++) {
    if (v[i] != i) return i;
  }
  return v.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}