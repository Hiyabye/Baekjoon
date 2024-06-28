#include <iostream>
#include <numeric>
#include <set>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  set<int> s; s.insert(v[0]);
  for (int i=1; i<n; i++) {
    vector<int> tmp;
    for (int x : s) tmp.push_back(x + v[i]);
    for (int x : tmp) s.insert(x);
    s.insert(v[i]);
  }
  cout << accumulate(v.begin(), v.end(), 0) - s.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}