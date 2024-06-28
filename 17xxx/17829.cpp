#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pool(vector<vector<int>>& v) {
  int n = v.size();
  vector<vector<int>> ret(n/2, vector<int>(n/2));
  for (int i=0; i<n/2; i++) for (int j=0; j<n/2; j++) {
    vector<int> tmp = {v[i*2][j*2], v[i*2+1][j*2], v[i*2][j*2+1], v[i*2+1][j*2+1]};
    sort(tmp.begin(), tmp.end());
    ret[i][j] = tmp[2];
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  for (int i=1; i<n; i<<=1) v = pool(v);
  cout << v[0][0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}