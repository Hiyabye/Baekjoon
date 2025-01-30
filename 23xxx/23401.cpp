#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(8, vector<int>());
  while (n--) {
    int t, a, b; cin >> t >> a >> b;
    v[--a].push_back(t);
  }

  int c = 0, d = 0;
  for (int i=0; i<4; i++) {
    c += v[i].size() * 100;
    for (int j=1; j<v[i].size(); j++) {
      if (v[i][j] - v[i][j-1] <= 10) c += 50;
    }
  }
  for (int i=4; i<8; i++) {
    d += v[i].size() * 100;
    for (int j=1; j<v[i].size(); j++) {
      if (v[i][j] - v[i][j-1] <= 10) d += 50;
    }
  }
  cout << c << " " << d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}