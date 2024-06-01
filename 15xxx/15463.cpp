#include <iostream>
#include <vector>
using namespace std;

void one(vector<vector<int>> &v) {
  int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
  for (int i=x1; i<x2; i++) for (int j=y1; j<y2; j++) {
    v[i+1000][j+1000] = 1;
  }
}

void two(vector<vector<int>> &v) {
  int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
  for (int i=x1; i<x2; i++) for (int j=y1; j<y2; j++) {
    v[i+1000][j+1000] = 0;
  }
}

void solve(void) {
  vector<vector<int>> v(2001, vector<int>(2001, 0));
  one(v); one(v); two(v);

  int ans = 0;
  for (int i=0; i<=2000; i++) for (int j=0; j<=2000; j++) ans += v[i][j];
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}