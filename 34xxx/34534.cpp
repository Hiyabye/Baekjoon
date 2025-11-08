#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

inline int calc(const vector<int> &v, int k) {
  set<int> s;
  for (int i=0; i<5; i++) s.insert(k + i);
  for (int x : v) s.erase(x);
  return s.size();
}

void solve(void) {
  vector<int> v(5);
  for (int i=0; i<5; i++) cin >> v[i];

  int ans = 1e9;
  for (int i=1; i<=5; i++) {
    ans = min(ans, calc(v, i));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}