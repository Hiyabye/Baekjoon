#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

map<int, string> mp = {
  {0, "PROBRAIN"}, {1, "GROW"}, {2, "ARGOS"},
  {3, "ADMIN"}, {4, "ANT"}, {5, "MOTION"},
  {6, "SPG"}, {7, "COMON"}, {8, "ALMIGHTY"}
};

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(9, vector<int>(n));
  for (int i=0; i<9; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  int max_idx = 0, max_val = *max_element(v[0].begin(), v[0].end());
  for (int i=1; i<9; i++) {
    int val = *max_element(v[i].begin(), v[i].end());
    if (val < max_val) continue;
    max_idx = i;
    max_val = val;
  }
  cout << mp[max_idx];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}