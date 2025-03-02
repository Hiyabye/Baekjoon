#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n1, n2; cin >> n1 >> n2;
  string s1, s2; cin >> s1 >> s2;
  int t; cin >> t;

  vector<pair<int, int>> ans(n1+n2);
  for (int i=0; i<n1; i++) ans[i] = {0, n1-i-1};
  for (int i=0; i<n2; i++) ans[n1+i] = {1, i};

  while (t--) {
    for (int i=1; i<n1+n2; i++) {
      if (ans[i-1].first == 0 && ans[i].first == 1) {
        swap(ans[i-1], ans[i]);
        i++;
      }
    }
  }

  for (auto [a, b] : ans) {
    cout << (a ? s2[b] : s1[b]);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}