#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int e; cin >> e;

  vector<unordered_set<int>> v(n);
  while (e--) {
    int k; cin >> k;
    vector<int> a(k);
    for (int i=0; i<k; i++) cin >> a[i], a[i]--;
    sort(a.begin(), a.end());
    if (a[0] == 0) {
      for (int i=1; i<k; i++) v[a[i]].insert(v[0].size());
      v[0].insert(v[0].size());
    } else {
      unordered_set<int> s;
      for (int i=0; i<k; i++) {
        for (int j : v[a[i]]) s.insert(j);
      }
      for (int i=0; i<k; i++) v[a[i]] = s;
    }
  }

  for (int i=0; i<n; i++) {
    if (v[i].size() == v[0].size()) {
      cout << i+1 << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}